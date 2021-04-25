
main:	add $t1, $zero, $s0
	add $t2, $zero, 7
	add $t3, $zero, $s1
	
loop:	add $t1, $t3, $t1
	sub $t2, $t2, 1
	bnez $t2, loop
	
	addi $a0, $t1, 0
	li $v0,1
	syscall
	li $v0, 10
	syscall
	
	

	