#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE * fPointer;
	fPointer = fopen("53.docx", "w+");
	fputs("I ate 3 pringles today", fPointer);

	fseek(fPointer, 7, SEEK_SET);
	fputs(" chips ahoy today", fPointer);

	fseek(fPointer, 7, SEEK_END);
	fputs(" nutri grain today", fPointer);

	fclose(fPointer);
	return 0;
}
