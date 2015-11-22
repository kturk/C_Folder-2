#include <stdio.h>
#include <stdlib.h>
#include "Structures_Info.h"

int main()
{
	struct user talgat;
	struct user efe;
	
	talgat.userID = 5;
	efe.userID = 6;

	puts("Enter the age of talgat");
	scanf("%d",&talgat.age);
	puts("Enter the last name of efe");
	scanf("%s", efe.lastName);

	printf("Talgat age is %d\n", talgat.age);
	printf("Efe last name is %s\n", efe.lastName);

	return 0;
}
