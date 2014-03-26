#ifndef BN_H
#define BN_H

#define 	WREG 	0xFE8
#define		BSR 	0xFE0
#define 	STATUS  0xFD8 //bit[4:0] [N,OV,Z,DC,C]
#define		TOSU	0xFFF
#define		TOSH	0xFFE
#define		TOSL	0xFFD
#define		STKPTR	0xFFC

extern char FSR[];
extern int PIC18Stack[32];

void bn(Bytecode *code);

#endif // BN_H
