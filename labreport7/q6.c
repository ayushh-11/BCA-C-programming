#include<stdio.h>
struct stdata{
	char name[20];
	int roll;
	struct dob{
		int day;
		int month;
		int year;
	}dob1;
}stdata1;
void main(){
	printf("Enter the name : ");
	gets(stdata1.name);
	printf("Enter DOB d,m,y : ");
	scanf("%d,%d,%d",&stdata1.dob1.day,&stdata1.dob1.month,&stdata1.dob1.year);
	printf("The name of the student is %s\n",stdata1.name);
	printf("The DOB of the student is %d,%d,%d\n",stdata1.dob1.day,stdata1.dob1.month,stdata1.dob1.year);
}