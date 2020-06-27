section .text
	global ft_strcmp

ft_strcmp:
	mov		rax, 0
	mov		rcx, 0
	mov		rdx, 0

loop:
	mov		al, byte [rdi + rdx] 
	mov		cl, byte [rsi + rdx] 
	cmp		al, 0
	je		my_ret
	cmp		cl, al
	jne		my_ret
	inc		rdx
	jmp		loop

my_ret:
	sub rax, rcx
	ret
