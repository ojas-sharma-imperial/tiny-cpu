module cond (
    input logic flagz,
    input logic flagc,
    input logic jumpen,
    input logic [1:0] jumpopc,
    input logic jumpinv,
    input logic [1:0] immc2,
    input logic [3:0] Ra,
    input logic [1:0] addr_extension,
    input logic [5:0] pcin,
    input logic [5:0] pcxin,

    output logic jump,
    output logic [5:0] destination,
    output logic saveadress
);

logic [6:0] offset;
logic [6:0] extended_reg;

always_comb begin
    case (immc2) // correct for immc2 weirdness
        2'b00: offset = 6'b000010; // +2
        2'b01: offset = 6'b000011; // +3
        2'b10: offset = 6'b111110; // -2
        2'b11: offset = 6'b111101; // -3
    endcase

    extended_reg[3:0] = Ra;
    extended_reg[5:4] = addr_extension;

    if (jumpen) begin
        saveadress = 1'b0;
        case (jumpopc)
            2'b00: begin // JMP/NOP
                if (jumpinv) begin // NOP
                    jump = 1'b0;
                end else begin // JMP
                    jump = 1'b1;
                    destination = pcin + offset;
                end
            end
            2'b01: begin // JEQ/JNE
                if (jumpinv) begin // JNE
                    jump = ~flagz;
                    destination = pcin + offset;
                end else begin // JEQ
                    jump = flagz;
                    destination = pcin + offset;
                end
            end
            2'b10: begin // JCS/JCC
                if (jumpinv) begin // JCC
                    jump = ~flagc;
                    destination = pcin + offset;
                end else begin // JCS
                    jump = flagc;
                    destination = pcin + offset;
                end
            end
            2'b11: begin // JSR/RET
                if (jumpinv) begin // RET
                    jump = 1'b1;
                    destination = pcxin;
                end else begin // JSR
                    jump = 1'b1;
                    destination = extended_reg;
                    saveadress = 1'b1;
                end
            end
        endcase
    end else begin
        jump = 1'b0;
    end
end

endmodule
