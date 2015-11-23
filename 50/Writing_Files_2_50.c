#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fPointer;
	fPointer = fopen("Lesson.rtd", "w");

	fprintf(fPointer, "CS is great\n");

	fclose(fPointer);

	return 0;
}
