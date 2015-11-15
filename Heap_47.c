#include <stdio.h>
#include <stdlib.h>

int main()
{

	int * points;

	points = (int *) malloc(5 * sizeof(int));

	free(points);

	return 0;
}
