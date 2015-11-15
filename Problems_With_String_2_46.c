#include <stdio.h>
#include <stdlib.h>

int main()
{
	char game [15];
	char * pGame = game;

	fgets(pGame, 15, stdin);
	puts(pGame);

	return 0;
}
