#include<stdio.h>
float celsius(float fahrenheit){
   return(fahrenheit - 32) * 5/9;
}
int main(){
	float fahrenheit;
	
	printf("\n....The calculation......\n");
	
	printf("Enter the temperature in farhaneit: \n");
	scanf("%f",&fahrenheit);
	
	printf("After conversion the temperature in celcius = %.2f\n",celsius(fahrenheit));
	return 0;
	
}


