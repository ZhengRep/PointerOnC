#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

int compare_integers(void const *a, void const *b)
{
	register const int* pa = (const int*)a;
	register const int* pb = (const int*)b;

	return *pa < *pb ? -1 : *pa > *pb ? 1 : 0;
}

int main()
{
	//get n
	int n_values;
	printf("How many values are there?");
	if (scanf("%d", &n_values) != 1 && n_values <= 0) {
		printf("Error input n!\n");
		exit(EXIT_FAILURE);
	}

	//allocate memory
	int* array = nullptr;
	array = (int*)malloc(n_values * sizeof(int));
	if (array == nullptr) {
		printf("Error allocate!\n");
		exit(EXIT_FAILURE);
	}

	//input values
	for (int i = 0; i < n_values; i++)
	{
		if (scanf("%d", array + i) != 1) {
			printf("Error read values : %d\n", i);
			exit(EXIT_FAILURE);
		}
	}

	//sort values
	qsort(array, n_values, sizeof(int), compare_integers);

	//print
	printf("Sorted sequence:\n");
	for (int i = 0; i < n_values; i++)
	{
		printf("%d  ", array[i]);
	}

	return 0;
}