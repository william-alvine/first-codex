//Variables and data types

#include <stdio.h>

int main(){
	//declare and initialize variables
	char grade='A'; //%C
	char name[15]="William"; //string %S
	int age=15; //%d
	float pi=3.142; //%f
	double budget=100024; //%lf
	
	//prompt the user
	printf("Enter your grade \t");
	scanf("%c",&grade);
	
	printf("Enter your name: \t");
	scanf("%s",&name);
	
	printf("Enter your age: \t");
	scanf("%d",&age);
	
	printf("Enter the value of PI: \t");
	scanf("%f",&pi);
	
	printf("Enter your budget: \t");
	scanf("%lf",&budget);
	
	printf("The grade is %c \n",grade);
	printf("My name is %s \n",name);
	printf("I am %d years old \n",age);
	printf("The value of pi=%.3f \n",pi);
	printf("My semesters budget is %lf \n",budget);

	return 0;
}