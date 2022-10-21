; 64-bit program in assembly that prints 'Hello, Holberton'
;
; #include <stdio.h>
; int main(void)
; {
; 	printf("Hello, Holberton\n");
; 	return (0);
; }

extern printf ; The standard library function to call

SECTION .data			; Data section, initialized variables

format: db "%s", 10, 0		; The printf format, "\n", '0'

str: db "Hello, Holberton", 0	; String to print

SECTION .text			; Code section

global main			; The standard gcc entry point

main:
	push rbp		; Setup stack frame
	mov rdi, format		; Format for printf
	mov rsi, str		; First parameter for printf
	mov rax, 0		; No xmm registers
	call printf		; Call printf function
	pop rbp			; Restore stack
	mov rax, 0		; Normal, no error, return value
	ret			; Return
