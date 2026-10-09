#include<stdio.h>
 //Function to calculate and return the total marks
 float calculateTotal(float m1, float m2, float m3){
	 return m1+m2+m3;
 }
 //Function to calculate and return average mark
 float calculateAverage(float total){
	 return total/3.0;
 }
 //Function to display whether the student Passed or Failed
void displayResult(float average){
	if(average>=50.0){
		printf("Result: Passed\n");
	}
else{
	printf("Result: Failed\n");
}
}
int main(){
	float mark1, mark2, mark3;
	float total, average;
	
	//Ask the user to enter marks for the three subjects
	printf("Enter mark for subject 1: ");
	scanf("%f",&mark1);
	
	printf("Enter mark for subject 2: ");
	scanf("%f",&mark2);
	
	printf("Enter mark for subject 3: ");
	scanf("%f",&mark3);
	
	//Call the user defined function
	total=calculateTotal(mark1, mark2, mark3);
	average=calculateAverage(total);
	
	//Display total mark and average mark
	printf("\nStudent Perfomance:");
	printf("Total marks: %.2f\n",total);
	printf("Average mark: %.2f\n",average);
	
	//Call displayResult function to print Pass/Fail result
	displayResult(average);

	return 0;
	
	}