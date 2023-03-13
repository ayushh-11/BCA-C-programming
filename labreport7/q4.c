#include<stdio.h>
struct ed{
	char name[30];
	float salary;
	int age;
	char department[30];
};
void main(){
	struct ed employee[20];
	for(int i=0;i<20;i++){
		printf("Enter name : ");
		scanf("%s",employee[i].name);
		printf("Enter salary : ");
		scanf("%f",&employee[i].salary);
		printf("Enter age : ");
		scanf("%d",employee[i].age);
		printf("Enter department : ");
		scanf("%s",employee[i].department);
	}
	for(int i=0;i<20;i++){
		printf("Data of student[%d]\n",i+1);
		printf("Name of employee is %s\n",employee[i].name);
		printf("Salary of employee is %f\n",employee[i].salary);
		printf("Age of employee is %d\n",employee[i].age);
		printf("Department of employee is %s\n",employee[i].department);
	}
}