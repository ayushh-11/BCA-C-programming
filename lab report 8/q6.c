#include<stdio.h>
void main(){
	FILE *fp;
	char name[30],post[30];
	int salary;
	printf("Enter name : ");
	scanf("%s",name);
	printf("Enter post : ");
	scanf("%s",post);
	printf("Enter salary : ");
	scanf("%d",&salary);
	fp=fopen("employess.txt","w");
	if(fp==NULL){
		printf("Cannot open file.");
		exit(0);
	}
	fprintf(fp,"ID Name : %s\nPost : %s\nSalary : %d",name,post,salary);
	fclose(fp);
}