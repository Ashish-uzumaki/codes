LDA 3000H
MVI B,00H
MVI C,08H
MOV D,A
ASH:
ANI 01H
ADD B
MOV B,A
MOV A,D
RRC
MOV D,A
DCR C
JNZ ASH

HLT
