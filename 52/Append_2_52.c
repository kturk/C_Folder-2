#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE * fPointer;
	fPointer = fopen("Movies.rtf", "a");

	fprintf(fPointer, "\n- a Hamburger");

	fclose(fPointer);	

	return 0;
}
