#include<stdio.h>

/*
MACRO is replace variable by stuff 

#define SQUARE(X) X * X
#define SQUARE(X) (X) * (X)

*/

#define DEBUG_PRINT(x, y, z) printf("File %s line %d: x = %d, y = %d, z = %d", __FILE__, __LINE__, x, y, z)

//#define PRINT(FORMAT, VALUE) printf("The value is" FORMAT "\n", VALUE)
#define PRINT(FORMAT, VALUE) printf("The value" #VALUE " is" FORMAT "\n", VALUE) //#argument is translated by the preprocessor into "argument"
#define ADD_TO_SUM(sum_number, value) sum##sum_number += value  //sum2 += value concatenation

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define MALLOC(n, type) ((type*)malloc((n) * sizeof(type)))

int main()
{
	int x = (1, 2);
	int y = 3;
	int z = 4;
	int sum = 1;
	int sum2 = 0;
	ADD_TO_SUM(2, 2);
	printf("%d", sum2);
	PRINT("%d", y + 3);
	return 0;
}