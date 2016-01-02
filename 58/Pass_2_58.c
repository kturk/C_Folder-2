#include <stdio.h>
#include <stdlib.h>

void numberOne(int i);
void numberOneAddress(int *i);

int main(){

	int firstNumber = 50;
	
	numberOne(firstNumber);
	printf("My first number is %d\n", firstNumber);

	numberOneAddress(&firstNumber);
	printf("First number's address is %d\n", firstNumber);

	return 0;
}

void numberOne(int i){
	i = 150;
	return;
}

void numberOneAddress(int *i){
	*i = 13;	
	return;
}
