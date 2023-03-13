#include<stdio.h>
struct bank{
	char name[30];
	int accno;
	float balance;
};
void main(){
	int n;
	struct bank temp;
	printf("Enter the number of members : ");
	scanf("%d",&n);
	struct bank member[n];
	for (int i=0;i<n;i++){
		printf("For member [%d]\n",i+1);
		printf("Enter name : ");
		scanf("%s",member[i].name);
		printf("Enter account number : ");
		scanf("%d",&member[i].accno);
		printf("Enter balance : ");
		scanf("%f",&member[i].balance);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(member[i].balance>member[j].balance){
				temp=member[i];
				member[i]=member[j];
				member[j]=temp;
			}
		}
	}
	printf("Data of member with highest balance : \n");
	printf("Name is %s\n",member[n-1].name);
	printf("Account number is %d\n",member[n-1].accno);
	printf("Balance of member is %f\n",member[n-1].balance);
	printf("Data of member with lowest balance : \n");
	printf("Name is %s\n",member[0].name);
	printf("Account number is %d\n",member[0].accno);
	printf("Balance of member is %f\n",member[0].balance);
}