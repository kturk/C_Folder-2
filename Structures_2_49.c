#include <stdio.h>
#include <stdlib.h>
#include "Structures_Info.h"
#include <string.h>

int main()
{
	struct user kemal;
	struct user bedo;

	kemal.userID = 1;
	bedo.userID = 2;

	puts("Enter the age of user 1");
	scanf("%d",&kemal.age);
	puts("Enter weight of user 2");
	scanf("%f", &bedo.weight);

	printf("User 1 age is %i\n", kemal.age);
	printf("User 2 weight is %.2f\n", bedo.weight);
	
	return 0;
}
