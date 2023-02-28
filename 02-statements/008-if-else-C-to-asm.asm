;char message[] = "Welcome";
;char first_character = 'W';
;char second_character = 'e';
;char third_character = 'l';

;    if(message[0] == first_character && 
;       message[1] == second_character &&
;       message[2] == third_character){
;        printf("they are all equal\n");
;    }else{
;        printf("non are equal\n");
;    }

jmp main
message: db "Welcome" 
         db 0

first_character:  db "W"
second_character: db "e"     
third_character:  db "v"
true_msg: db "they are all equal" 
          db 0
false_msg: db "non are equal"
           db 0          
main:
MOV D, 232
MOV A, message
MOV A, [A]

CMP A, [first_character]
JE second_condition
JMP isfalse


second_condition:
MOV B, message
INC B

MOV B, [B]
CMP B, [second_character]
JE third_condition
JMP isfalse


third_condition:
MOV C, message
ADD C, 2

MOV C, [C]
CMP C, [third_character]
JE istrue
JMP isfalse


istrue:
MOV A, true_msg
loop:
MOV B, [A]
MOV [D], B
CMP B, 0
JE out_of_code 
INC A
INC D
JMP loop

isfalse:
MOV A, false_msg
loop:
MOV B, [A]
MOV [D], B
CMP B, 0
JE out_of_code 
INC A
INC D
JMP loop
out_of_code:
hlt
