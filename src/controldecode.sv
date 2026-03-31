module controldecode (
    input logic [7:0] instruction,
    output logic jumpen,
    output logic flagcwen,
    output logic flagzwen,
    output logic [1:0] immc2,
    output logic jumpinv,
    output logic [1:0] jumpopc
);

logic [1:0] sectionopc;
logic [2:0] aluopc;
logic [3:0] Ra;

assign sectionopc = instruction[7:6];
assign aluopc = instruction[2:0];
assign Ra = instruction[5];
assign immc2 = instruction[5:4];
assign jumpinv = instruction[3];
assign jumpopc = instruction[2:1];

always_comb begin
    jumpen = 1'b0;
    flagzwen = 1'b0;
    flagcwen = 1'b0;
    
    if ((~sectionopc[1]) | ((sectionopc[1]) & (~sectionopc[0]))) begin // alu or extend instruction
        jumpen = 1'b0;
        if ((aluopc != 3'b111) | ((~sectionopc[1]) & (aluopc == 3'b111))) begin // alu selected
            flagzwen = 1'b1;
            if ((aluopc == 3'b000) || (aluopc == 3'b101)) begin // instruction doesn't write to flagc, MOV and NAND
                flagcwen = 1'b0;
            end else begin // instruction writes to flagc
                flagcwen = 1'b1;
            end
        end else begin // extend selected
            flagzwen = 1'b0;
            flagcwen = 1'b0;
        end
    end else begin // not alu or extend
        if ((sectionopc == 2'b11) & (aluopc[0] == 1'b1)) begin // jumps
            jumpen = 1'b1;
            flagzwen = 1'b0;
            flagcwen = 1'b0;
        end
        if ((sectionopc == 2'b11) & (aluopc[0] == 1'b0)) begin // memory instructions
            jumpen = 1'b0;
            if (aluopc[1] == 1'b0) begin // LDR
                flagzwen = 1'b1;
                flagcwen = 1'b0;
            end else begin // STR
                flagzwen = 1'b0;
                flagcwen = 1'b0;
            end
        end

    end
end

endmodule
