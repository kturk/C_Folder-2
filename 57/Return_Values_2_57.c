#include <stdio.h>
#include <stdlib.h>

int calculateBonus(int yearsWorked);

int main(){

	int kemalBonus = calculateBonus(56);
	int serhanBonus = calculateBonus(1);
	int cemalBonus = calculateBonus(33);

	printf("Kemal gets $%d \n", kemalBonus);
	printf("Serhan gets $%d \n", serhanBonus);
	printf("Cemal gets $%d \n", cemalBonus);

	return 0;
}

int calculateBonus(int yearsWorked){
	int bonus = yearsWorked * 175;

	if(yearsWorked > 25){
		bonus = 10000;
	}

	return bonus;
}
