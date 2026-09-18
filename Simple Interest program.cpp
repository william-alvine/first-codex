#include<stdio.h>

int main(){
	
	float principleamount;  
	float time;
	float rate;
	float simpleinterest;
	
	printf("Enter the principleamount");
	scanf("%f",&principleamount);
	
	printf("Enter the time taken");
	scanf("%f",&time);
	
	printf("Enter the rate used");
	scanf("%f",&rate);
	
	simpleinterest=(principleamount*time*rate)/100;
	
	printf("The simpleinterest %.2f \n",simpleinterest);
	
	return 0;
	
}