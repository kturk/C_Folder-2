#include <stdio.h>
#include <stdlib.h>

void printHere();

int main(){
	int apple = 2;
	printf("I ate %d apple\n", apple);
	printHere();

	return 0;
}

void printHere(){
	printf("I don't have a variable :(\n");

	return;
}
