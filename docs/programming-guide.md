# ttcpu Programming Guide

This document will outline how to write software for the ttcpu, providing some examples of standard programming structures implemented in ttcpu assembly. It will also outline the general syntax structure for the ttcpu assembler.

## ttcpu Assembly Syntax

Generally, instructions consist of two parts:
- Opcode (ie. `MOV`, `LSL`, `JEQ`)
- Operand (ie. `Ra`, `#IMMS4`)

Opcodes are separated from operands by a space character and (when more than one operand is specified for an instruction) operands are separated from each other by a comma and a space. A hashtag placed before an operand denotes an immediate value, and square brackets surrounding an operand denote it is a memory address pointer:

```
MOV #14 // store the immediate value 14 into A
MOV B, A // move the value of A into B
LDR A, [#2] // load the data at RAM[2] into A
STR B, [A] // store the value of B into RAM[A]
```

Note that all values inputted by the programmer at assembly-level are interpreted by the assembler as being in base-10.

## ttcpu Example Software

The following program implements a simple, unoptimised shift 4-bit shift multiplication algorithm:

```
// let RAM[0] be the product and RAM[1] be a temporary variable
MOV #3
MOV B, A // load multiplier value into B
MOV #2 // load multiplicand value into A
MRK // beginning of main loop
LSR #1 // shift multiplier right by 1; loading FlagC with its LSB
EXT2 1
JCC 2 // if LSB=0 then jump by extended offset of 0b0110, or 6
STR A, [#1] // temporarily store multiplicand
LDR A, [#0] // load product into A
ADD A, B // add multiplicand to product
STR A, [#0] // store product back to memory
LDR A, [#1] // bring multiplicand back into A
ADD B, B // shift multiplier right by 1
CMP #0 // compare multiplier with 0
JEQ #2 // if multiplicand zero then multiplication is complete
RET // jump back to start of main loop
LDR A, [#0] // end of multiplication; load product into register A
```
