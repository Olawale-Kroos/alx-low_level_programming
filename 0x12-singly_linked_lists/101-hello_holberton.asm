global 	main
	extern 	printf

	section .text
main:
	mov	rdi, format
	mov	rax, 0
	call	printf
	mov	rsi, 0
	mov	rax, 0
	ret

section .data

format:
	db "Hello, Holberton", 10, 0
