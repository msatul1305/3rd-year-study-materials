	mvi b,05h
	mvi c,99h
	mov a,b
	cma
	mov b,a
	mov a,c
	cma
	adi 01h
	mov c,a
	mov a,b
	jnc label
	inr b
label:
	hlt
.end