#include<stdio.h>
void main(){
	int income;
	char gender[1],marital_status[1];
	float tax;
	printf("Enter your annual income : ");
	scanf("%d",&income);
	printf("Enter your gender 'm' for male and 'f' for female : ");
	scanf("%s",&gender);
	printf("Are you married? Press 'y' or 'n' for yes or no : ");
	scanf("%s",&marital_status);
	if (marital_status=="y"){
		if(income<=450000)
			tax=0.01*income;
		else if(income>450000&&income<=550000)
			tax=0.01*450000+0.1*(income-450000);
		else if (income>550000&&income<=750000)
			tax=0.01*450000+0.1*100000+0.2*(income-550000);
		else if (income>750000&&income<=1300000)
			tax=0.01*450000+0.1*100000+0.2*200000+0.3*(income-750000);
		else
			tax=0.01*450000+0.1*100000+0.2*200000+0.3*550000+0.35*(income-1300000);	
	}
	else{
		if(income<=400000)
			tax=0.01*income;
		else if(income>400000&&income<=500000)
			tax=0.01*400000+0.1*(income-400000);
		else if (income>500000&&income<=750000)
			tax=0.01*400000+0.1*100000+0.2*(income-500000);
		else if (income>750000&&income<=1300000)
			tax=0.01*400000+0.1*100000+0.2*250000+0.3*(income-750000);
		else
			tax=0.01*450000+0.1*100000+0.2*200000+0.3*550000+0.35*(income-1300000);
	}
	if(gender=="f")
		tax=tax-0.1*tax;
 printf("Your tax is Rs %f",tax);
}