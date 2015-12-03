#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fPointer;
	fPointer = fopen("53.docx", "w+");
	fputs("I ate 3 pumpkins today", fPointer);

	fseek(fPointer, 7, SEEK_SET);
	fputs(" munchkins on Friday", fPointer);
	
	fseek(fPointer, -6, SEEK_END);
	fputs("top of a mountain", fPointer);
	
	fclose(fPointer);
	return 0;
}
