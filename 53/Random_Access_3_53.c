#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fPointer;
	fPointer = fopen("53.docx", "w=");
	fputs("I ate 3 pizza today", fPointer);
	
	fseek(fPointer, 7, SEEK_SET);
	fputs(" hamburger today", fPointer);

	fseek(fPointer, 7,  SEEK_END);
	fputs(" cheese today", fPointer);
	
	fclose(fPointer);
	return 0;
}
