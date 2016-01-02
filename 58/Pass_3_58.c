#include <stdio.h>
#include <stdlib.h>

void numberTwo(int i);
void numberTwoAddress(int *i);

int main(){

	int secondNumber = 40;
	
	numberTwo(secondNumber);
	printf("My second number is %d\n", secondNumber);

	numberTwoAddress(&secondNumber);
	printf("My second number's address is %d\n", secondNumber);

	return 0;
}

void numberTwo(int i){
	i = 3;
	return;
}

void numberTwoAddress(int *i){
	*i = 78;
	return;
}
