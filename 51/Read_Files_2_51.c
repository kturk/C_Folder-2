#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fPointer;
	fPointer = fopen("food.rtf", "r");
	char singleLine[250];
	
	while(!feof(fPointer)){
		fgets(singleLine, 250, fPointer);
		puts(singleLine);
	}

	fclose(fPointer);

	return 0;
}
