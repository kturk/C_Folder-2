#include <stdio.h>
#include <stdlib.h>

int calculateAttendance(int daysNotCome);

int main(){

	int kemalAttendance = calculateAttendance(4);
	int bedrettinAttendance = calculateAttendance(2);
	int burakhanAttendance = calculateAttendance(5);

	printf("Kemal's attendance hours is %d \n", kemalAttendance);
	printf("Bedo's attendance is %d \n", bedrettinAttendance);
	printf("Burakhan's attendance is %d \n", burakhanAttendance);

	return 0;
}

int calculateAttendance(int daysNotCome){
	int attendance = daysNotCome * 4;

	
	return attendance;
}
