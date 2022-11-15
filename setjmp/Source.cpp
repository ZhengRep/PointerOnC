#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

jmp_buf restart;
int main()
{

	int value = setjmp(restart);

	
	switch (value) {
	default:
		fputs("Fatla error.\r\n", stderr);
		break;

	case 1:
		fputs("Invalid transaction.\r\n", stderr);

	}

	return 0;
}