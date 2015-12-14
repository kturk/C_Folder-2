#include <stdio.h>
#include <stdlib.h>

void convertToDollars(float euro);
	
int main(){

	float euroPrice1 = 3.23;
	float euroPrice2 = 6.54;

	convertToDollars(euroPrice1);
	convertToDollars(euroPrice2);
	convertToDollars(123.34455);
	
	return 0;
}

void convertToDollars(float euro){
	float usd = euro * 1.37;
	printf("%.2f Euros - %.2f USD\n", euro, usd);

	return;
}
