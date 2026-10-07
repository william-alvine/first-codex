#include<stdio.h>
int main(){
	int household;
	float units;
	
	printf("=========\n");
	printf("Electricity Bill per household");
	printf("==========\n");
	
	for(household=1;household<=10;household++){
		
		printf("Enter units consumed for household %d\t",household);
		scanf("%f",&units);
		printf("The bill is Ksh %f \n",units*10);
	}
	return 0;
}
