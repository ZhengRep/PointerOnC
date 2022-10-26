#include<stdio.h>
#include<stdlib.h>

void proportion_100(int n)
{
	n = n + 5;
	n /= 10;
	printf("%s\n", "**********" + 10 - n);
}

int main(int argc, char** argv)
{
	proportion_100((atoi((const char*)*++argv)));

	return 0;
}