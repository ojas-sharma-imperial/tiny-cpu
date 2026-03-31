module dpdecode (
    input logic [7:0] instruction,
    output logic [1:0] sectionopc,
    output logic [2:0] aluopc,
    output logic [3:0] imms4,
    output logic [1:0] shiftcount,
    output logic [1:0] shiftopc,
    output logic Ra,
    output logic Rb,
    output logic imm1,
    output logic [1:0] imm2,
    output logic [1:0] immc2,
    output logic jumpinv,
    output logic [1:0] jumpopc,
    output logic aluen,
    output logic shiften,
    output logic extenden,
    output logic wen1,
    output logic op2sel,
    output logic jumpen,
    output logic memldr,
    output logic memstr
);

// collect the relevant parts of the instruction

assign sectionopc = instruction[7:6];
assign aluopc = instruction[2:0];
assign imms4 = instruction[6:3];
assign shiftcount = instruction[6:5];
assign shiftopc = instruction[4:3];
assign Ra = instruction[5];
assign Rb = instruction[4];
assign imm1 = instruction[5];
assign imm2 = instruction[4:3];
assign immc2 = instruction[5:4];
assign jumpinv = instruction[3];
assign jumpopc = instruction[2:1];

// use boolean algebra to get some control signals

always_comb begin
    wen1 = 1'b0; // reset all control signals before computing their values, for verilator :)
    memldr = 1'b0;
    memstr = 1'b0;
    op2sel = 1'b0;
    shiften = 1'b0;
    jumpen = 1'b0;
    
    if ((~sectionopc[1]) | ((sectionopc[1]) & (~sectionopc[0]))) begin // alu or extend instruction
        if ((aluopc != 3'b111) | ((~sectionopc[1]) & (aluopc == 3'b111))) begin // alu selected
            aluen = 1'b1;
            extenden = 1'b0;

            if (aluopc == 3'b110) begin // instruction doesn't write to registers, CMP
                wen1 = 1'b0;
            end else begin // instruction writes to registers
                wen1 = 1'b1;
            end

            if (~sectionopc[1]) begin // immediate
                op2sel = 1'b1;
                Ra = 1'b0; // always occur on register A
            end else begin // register
                op2sel = 1'b0;
            end

            if (aluopc == 3'b111) begin // shifts
                shiften = 1'b1;
                Ra = 1'b0; // always occur on register A
            end else begin
                shiften = 1'b0;
            end

        end else begin // extend selected
            aluen = 1'b0;
            extenden = 1'b1;
            wen1 = 1'b0;
        end
    end else begin // not alu or extend
        aluen = 1'b0;
        extenden = 1'b0;
        wen1 = 1'b0;

        if ((sectionopc == 2'b11) & (aluopc[0] == 1'b1)) begin // jumps
            jumpen = 1'b1;
        end

        if ((sectionopc == 2'b11) & (aluopc[0] == 1'b0)) begin // memory instructions
            op2sel = ~aluopc[2]; // 0 for register Rb, and 1 for imm2
            if (aluopc[1] == 1'b0) begin // LDR
                wen1 = 1'b1;
                memldr = 1'b1;
            end else begin // STR
                wen1 = 1'b0;
                memstr = 1'b1;
            end
        end

    end
end

endmodule
