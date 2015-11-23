#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fPointer;
	fPointer = fopen("Food.rtd", "w");

	fprintf(fPointer, "Pizza is my favorite food\n");

	fclose(fPointer);

	return 0;
};
