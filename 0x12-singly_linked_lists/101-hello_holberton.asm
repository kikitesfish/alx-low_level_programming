SECTION .data
msg: db "Hello, Holberton",
fmt: db "%s", 10 , 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	moc eax, 0
	call printf

	mov eax, 0
	ret
