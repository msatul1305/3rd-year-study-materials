	mvi b,0ffh
	mvi c,74h
	mov a,b
	add c
	daa
	mvi d,00
	jnc label
	inr d
label:  hlt