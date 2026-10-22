#include <stdio.h>
int bill(int units){
	int amount;
	
	if(units<=100){
		amount=units*10;
	}
	else if(units<=200){
		amount=units*15;
	}
	else{
		amount=units*20;
	}
	return amount;
}

int main(){
	
	int units;
	
	printf("Electric Bill per Household\n");
	
	printf("\nEnter the number of units consumed: ");
	scanf("%d",&units);
	printf("The total bill calculated is: Ksh.%d.\n",bill(units));
	
	
	return 0;
}
