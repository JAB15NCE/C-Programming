#pragma once

//Data Directives
#define DSS "DSS"
#define DWORD "DWORD"

//Assembly mnemonics 
#define MOVI "MOVI"
#define ADD  "ADD"
#define SUB  "SUB"
#define CMP  "CMP"
#define MUL  "MUL"
#define DIV  "DIV"
#define LDR  "LDR"
#define STR  "STR"
#define BE   "BE"
#define BNE  "BNE"
#define BL   "BL"
#define BG   "BG"
#define BLE  "BLE"
#define BGE  "BGE"
#define B    "B"
#define HALT "HALT"

//Machine Opcodes
#define OPCODE_MOVI "0000"
#define OPCODE_ADD  "0001"
#define OPCODE_SUB  "0010"
#define OPCODE_CMP  "0011"
#define OPCODE_MUL  "0100"
#define OPCODE_DIV  "0101"
#define OPCODE_LDR  "0110"
#define OPCODE_STR  "0111"
#define OPCODE_BE   "1000"
#define OPCODE_BNE  "1001"
#define OPCODE_BL   "1010"
#define OPCODE_BG   "1011"
#define OPCODE_BLE  "1100"
#define OPCODE_BGE  "1101"
#define OPCODE_B    "1110"
#define OPCODE_HALT "1111"

//Machine Code Instruction Alignment Padding  
#define MCIA_PADDING "0000"