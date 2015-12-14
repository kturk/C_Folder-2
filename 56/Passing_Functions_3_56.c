#include <stdio.h>
#include <stdlib.h>

void convertToDollars (float lira);
	
int main(){

	float liraPrice1 = 800.53;
	float liraPrice2 = 32.4567;

	convertToDollars(liraPrice1);
	convertToDollars(liraPrice2);
	convertToDollars(341.564574);

	return 0;
}

void convertToDollars(float lira){	
	float usd = lira * 2.98;
	printf("%.2f Liras - %.2f USD\n", lira, usd);

	return;
}
