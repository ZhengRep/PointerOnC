#include "Header.h"

int sa = 5;

void fun()
{
	int a = 5;
	//static int sa = 5; //a static variable inside a function keeps its value between invocations
	a += 5;
	sa += 5;
	printf("a = %d, sa = %d \r\n", a, sa);
}