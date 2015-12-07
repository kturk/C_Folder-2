#include <stdio.h>
#include <stdlib.h>

void HERE();

int coffee = 2;
char austin[] = "Austin";

int main(){
	printf("I drink %d coffee every day\n", coffee);
	HERE();

	return 0;
}

void HERE(){
	printf("I like %s\n", austin );

	return;
}
