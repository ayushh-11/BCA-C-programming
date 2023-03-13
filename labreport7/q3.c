#include<stdio.h>
struct student{
	char name[30];
	int roll;
	float marks;
	char remarks[30];
};
void main(){
	struct student std[5];
	for(int i=0;i<5;i++){
		printf("Enter name : ");
		scanf("%s",std[i].name);
		printf("Enter roll : ");
		scanf("%d",&std[i].roll);
		printf("Enter marks : ");
		scanf("%f",&std[i].marks);
		printf("Enter remarks : ");
		scanf("%s",std[i].remarks);
	}
	for(int i=0;i<5;i++){
		printf("Data of student [%d]\n",i+1);
		printf("Name of student is %s\n",std[i].name);
		printf("Roll no of student is .%d\n",std[i].roll);
		printf("Marks of student is .%f\n",std[i].marks);
		printf("Remarks is %s\n",std[i].remarks);
	}
}