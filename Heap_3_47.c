#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * serhan;

	serhan = (int *) malloc(8 * sizeof(int));

	free(serhan);
	
	return 0;
}
