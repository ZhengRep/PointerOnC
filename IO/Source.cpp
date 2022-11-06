#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

/*
EOF -> 2 byte
Character	getchar		pushchar
Line		gets		puts
			scanf		printf
Binary		fread		fwrite

*-Family Name-*-To any stream-*-Only stdin and stdout-*-String in Memory-*
* getchar		fgetc, getc		getchar					Use a subscript or indirection on a pointer
* putchar		fputc, putc		putchar					same above
* gets			fgets			gets					Use strcpy to get/put lines to/from memory
* puts			fputs			puts					same above
* scanf			fscanf			scanf					sscanf
* printf		fprintf			printf					sprintf
*/

/*
ungetc: ungetc return a character previously read back to the stream so that it cn be read again later

*/


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