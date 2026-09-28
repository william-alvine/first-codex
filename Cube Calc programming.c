#include<stdio.h>

int main(){
	
	float radius;
	float volume;
	float surfacearea;
	
	//prompt the user
	
	printf("Enter the radius. \t");
	scanf("%f",&radius);
	
	printf("Enter the radius. \t");
	scanf("%f",&radius);
	
	volume = radius*radius*radius;
	surfacearea = 6*radius*radius;
	
	printf("The volume is %f \n",volume);
	printf("The surface area is %f \n",surfacearea);
	
	return 0;
}
