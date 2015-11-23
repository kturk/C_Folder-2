#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fPointer;
	fPointer = fopen("Games.rtd", "w");

	fprintf(fPointer, "Chess!\n");

	fclose(fPointer);

	return 0;
}
