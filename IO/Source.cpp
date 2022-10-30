#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

int main()
{
	FILE* file;
	file = fopen("data3", "r");
	if (file == NULL) {
		perror("data3");
		exit(EXIT_FAILURE);
	}
	return 0;
}