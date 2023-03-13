#include<stdio.h>
struct employee{
	char name[30];
	char address[30];
	float salary;	
};
void main(){
	int j,i,n,k,n1,n2;
	printf("Enter the number of employees : ");
	scanf("%d",&n);
	struct employee empdata[n],temp;
	for(i=0;i<n;i++){
		printf("Enter data of student[%d]\n",i+1);
		printf("Enter name : ");
		scanf("%s",empdata[i].name);
		printf("Enter address : ");
		scanf("%s",empdata[i].address);
		printf("Enter salary : ");
		scanf("%f",&empdata[i].salary);
	}
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			for(k=0;(k<strlen(empdata[i].name )|| (k<strlen(empdata[j].name)));k++){
				n1=empdata[i].name[k];
				n2=empdata[j].name[k];
				if(n1>n2){
					temp=empdata[i];
					empdata[i]=empdata[j];
					empdata[j]=temp;
					break;
				}
				if(n1!=n2)
					break;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("In alphabetical order : \n");
		printf("Name is %s\n",empdata[i].name);
		printf("Address is %s\n",empdata[i].address);
		printf("Salary i %f\n",empdata[i].salary);
	}
}