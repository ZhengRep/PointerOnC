#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma warning(disable: 4996)

#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column(int* columns)
{
	int index = 0;
	//end with negative value
	while (index < MAX_COLS && 1 == scanf("%d", columns + index) && columns[index] >= 0) index++;

	if (index % 2 != 0) exit(EXIT_FAILURE);

	char ch;
	while ((ch = getchar()) != EOF && ch != '\n');

	return index;
}

void rearrange(char* input, int* columns, int n_columns, char* output)
{
	if (n_columns < 1) return;

	int output_len = 0;
	int len = strlen(input);
	int n_char;
	for (int i = 0; i < n_columns; i += 2)
	{
		n_char = columns[i + 1] - columns[i] + 1;
		if (output_len + n_char > len) n_char = len - output_len;

		strncpy(output + output_len, input + columns[i] - 1, n_char);
		output_len += n_char;
	}

	output[output_len] = '\0';
}

int main()
{
	char input[MAX_INPUT];
	char output[MAX_INPUT];
	int columns[MAX_COLS];

	int n_columns = read_column(columns);

	while (fgets(input, MAX_INPUT, stdin))
	{
		printf("Original input: %s \n", input);
		rearrange(input, columns, n_columns, output);
		printf("Rearrange input: %s \n", output);
	}
	return 0;
}

/*
how can we read a class fileds and can't write this fileds
*/