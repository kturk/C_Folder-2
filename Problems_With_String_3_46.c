#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char soccer [40];
	char * pSoccer = soccer;

	fgets(pSoccer, 40, stdin);
	puts(pSoccer);
	
	return 0;
}
