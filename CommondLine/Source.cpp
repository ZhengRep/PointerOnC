#include<stdio.h>

/*
to process command line
*/
//path -a -b a.c b.c

void process_standard_input();
void process_file(char* file_name);

bool g_option_a = false, g_option_b = false;

int main(int argc, char** argv)
{

	while (*++argv != nullptr && **argv == '-')
	{
		switch (*((*argv)++))
		{
		case 'a':
			g_option_a = true;
			break;
		case 'b':
			g_option_b = true;
			break;
		default:
			break;
		}
		argv++;
	}

	if (*argv == nullptr) {
		process_standard_input();
	}
	else {
		do {
			process_file(*argv);
		} while ((*++argv) != nullptr);
	}

	return 0;
}

void process_standard_input(void)
{
	printf("Standard input!\n");
}

void process_file(char* file_name)
{
	printf("file name: %s\n", file_name);
}
