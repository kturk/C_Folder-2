#include <stdio.h>
#include <stdlib.h>

int main()
{

	int * kemal;

	kemal = (int *) malloc(10 * sizeof(int));

	free(kemal);

	return 0;
}
