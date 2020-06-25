
section .text
	global _ft_strlen

_ft_strlen:
	mov		rax, 0

loop:
	cmp		byte[rdi + rax], 0
	je		my_ret
	inc		rax;
	jmp		loop

my_ret:
	ret
