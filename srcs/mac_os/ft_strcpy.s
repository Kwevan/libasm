
section .text
	global _ft_strcpy

_ft_strcpy:
	mov		rax, 0

loop:
	cmp		byte[rsi + rax], 0
	je		my_ret
	mov		cl, byte[rsi + rax]
	mov		byte[rdi + rax], cl
	inc		rax
	jmp		loop

my_ret:
	mov byte[rdi + rax], 0
	mov rax, rdi
	ret
