#include<stdio.h>
struct student{
	char name[50];
	int age;
	float marks;
};
void main(){
	struct student student1;
	strcpy(student1.name,"Ayush");
	student1.age=20;
	student1.marks=95.5;
	printf("The name is %s",student1.name);
	printf("\nThe age is %d",student1.age);
	printf("\nThe marks is %.2f",student1.marks);
}