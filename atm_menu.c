#include<stdio.h>

int main(){
	int choice;
	float balance=40000;
	float amount;
	
	printf("ATM MENU\n");
	printf("1.Check Balance\n");
	printf("2.Deposit Money\n");
	printf("3.Withdraw Money\n");
	printf("4.Exit\n");
	
	printf("Select an option:\t");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
		printf("Your current balance in Ksh %.2f\n",balance);
		scanf("%f",&balance);
		break;
	
	case 2:
		printf("Enter amount to deposit:Ksh");
		scanf("%f",&amount);
	
		if(amount>0){
			balance=balance+amount;
			printf("Deposit of Ksh %.2f successful.\n",amount);
			printf("New account balance:Ksh %.2f\n",balance);
		}
		else{
			printf("Invalid deposit amount.\n");
		}
		break;
	case 3:
		printf("Enter amount to withdraw:Ksh");
		scanf("%f",&amount);
		
		if(amount>0 && amount<=balance){
				balance=balance-amount;
				printf("Withdrawal of Ksh %.2f successful.\n",amount);
				printf("Remaining account balance:Ksh %.2f\n",balance);
		}
		else if(amount>balance){
			printf("Insufficient balance.\n");
		}
	else{
		printf("Invalid withdrawal amount.\n");
	}
	break;
 case 4:
 	printf("Thank you for using the ATM.Goodbye!");
 	break;
 
 default:
 printf("Invalid option.Please select 1,2,3,4.\n");
	}
	
	return 0;
}