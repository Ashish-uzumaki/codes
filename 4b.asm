//FOR PSW AAH -->ADD result is stored in 5000H and SUB result in 5001H
//FOR PSW 55H -->ADD result is stored in 5002H and SUB result in 5003H
MVI D,00H
MVI E,55H
PUSH D //It will push the pair register D,E to stack and since stack is of 16bit, so both D,E pair will get push to stack
PUSH D

MVI E,AAH

PUSH D //It will push the pair register D,E to stack
PUSH D

MVI B,F5H
MVI C,8AH

POP PSW // It will POP or Remove value from the top of the
	//stack and store it in PSW (accumulator + flag regiter)

//Now PSW has 00AAH
MOV A,B
ADD C
STA 5000H //Store the result of F5 + 8A (when PSW is00AA) in 5000H


POP PSW
//PSW has 00AAH
MOV A,B
SUB C
STA 5001H //Store the result of F5 - 8A (when PSW is00AA) in 5001H

POP PSW
//PSW now has 0055H
MOV A,B
ADD C
STA 5002H //Store the result of F5 + 8A (when PSW is00AA) in 5002H

POP PSW
//PSW has 0055H
MOV A,B
SUB C
STA 5003H //Store the result of F5 - 8A (when PSW is00AA) in 5003H


HLT
