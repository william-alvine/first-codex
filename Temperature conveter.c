/*
Author William
admission number BCS-05-0219/2026
*/

#include<stdio.h>

int main(){
	//Temperature conversion 
	float Temperature_in_kelvin;
	float Temperature_in_celcius; 
	float Temperature_in_fahrenheit;
	
	//prompt the user
	
    printf("Enter the Temperature in celcius \t");
    scanf("%f", & Temperature_in_celcius);
    
    Temperature_in_kelvin = Temperature_in_celcius+273;
    Temperature_in_fahrenheit =(Temperature_in_celcius*1.8)+32;
    
    
    printf("The Temperature_in_kelvin is %.2f \n",Temperature_in_kelvin);
    printf("The Temperature_in_fahrenheit is %.2f \n",Temperature_in_fahrenheit);
    
    return 0;
	
}