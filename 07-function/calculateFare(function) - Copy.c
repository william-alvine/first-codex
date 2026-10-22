#include <stdio.h>
int fare(int distance){
	int fare;
	int rate_per_kilometer=50;
	
	fare=distance*rate_per_kilometer;
	
	return fare;
}

int main(){
	
	int distance;
	
	printf("Calculate the fare per kilometer\n");
	
	printf("\nEnter the distance covered in kilometers: ");
	scanf("%d",&distance);
	printf("\nThe total fare for the distance covered: Ksh.%d.\n",fare(distance));

	return 0;
}
