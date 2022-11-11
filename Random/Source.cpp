#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//srand((unsigned int)time(NULL));

	//for (int i = 0; i < 100; i++) {
	//	printf("%d\r\n", rand());
	//}
	//printf("Max random num: %d", RAND_MAX); //32767

	time_t t;
	time_t t1 = time(&t);

	return 0;
}