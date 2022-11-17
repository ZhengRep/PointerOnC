#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

typedef struct {
	char key[10];
	int other_data;
} Record;

int r_compare(void const* a, void const* b)
{
	return strcmp(((Record*)a)->key, ((Record*)b)->key);
}

int main()
{
	Record array[3];

	strcpy(array[0].key, "B");
	strcpy(array[1].key, "A");
	strcpy(array[2].key, "C");

	Record key;
	Record* ans;

	strcpy(key.key, "C");
	ans = (Record*)bsearch(&key, array, 3, sizeof(Record), r_compare);

	//qsort(array, 3, sizeof(Record), r_compare);
	
	

	return 0;
}