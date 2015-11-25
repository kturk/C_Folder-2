#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE * fPointer;
	fPointer = fopen("food.rtf", "r");
	char singleLine[300];
	
	while(!feof(fPointer)){
		fgets(singleLine, 300, fPointer);
		puts(singleLine);
	}

	fclose(fPointer);

	return 0;
}
