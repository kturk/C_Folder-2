#include <stdio.h>
#include <stdlib.h>

void printSomething();
	
int warts = 23; // Here for global variables

int main(){
	// Here for local variables
	printf("I have %d warts\n", warts);
	printSomething();

	return 0;
}

void printSomething(){
	printf("I have %d warts\n", warts);

	return;
}
