/*Author:William
Reg Number:BCS-05-0219/2026
Description:Library fine calcilation
*/

#include<stdio.h>

int main(){
	int BookID,DueDate,ReturnDate,daysOverdue,fineRate,fineAmount;
	
	printf("Enter the BookID: \t");
	scanf("%d",&BookID);
	
	printf("Enter the DueDate: \t");
	scanf("%d",&DueDate);
	
	printf("Enter the ReturnDate: \t");
	scanf("%d",&ReturnDate);
	
	daysOverdue = ReturnDate - DueDate;
	
	printf("Days Overdue = %d.\n",daysOverdue);
	
	if(daysOverdue>=15){
		fineRate=100;
		fineAmount=daysOverdue*fineRate;
	}
		else if(daysOverdue>=14 && daysOverdue<=8){
			fineRate=50;
			fineAmount=daysOverdue*fineRate;
	
	}
	
	else{
		fineRate=20;
		fineAmount=daysOverdue*fineRate;
	
	}
		
	printf("Enter the user details: \n");
	printf("BookID=%d. \n",BookID);
	printf("DueDate=%d. \n",DueDate);
	printf("ReturnDate=%d. \n",ReturnDate);
	printf("daysOverdue=%d. \n",daysOverdue);
	printf("fineRate=%d. \n",fineRate);
	printf("fineAmount=%d. \n",fineAmount);

		
		return 0; 
	
}