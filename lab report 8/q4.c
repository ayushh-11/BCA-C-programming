#include<stdio.h>
void main(){
	FILE *fp;
	char name[30];
	int age;
	printf("Enter name: ");
	scanf("%s",name);
	printf("Enter age: ");
	scanf("%d",&age);
	fp=fopen("record.txt","w");
	if(fp==NULL){
		printf("Cannot open file");
		exit(0);
	}
	fprintf(fp,"Name : %s\nAge : %d",name,age);
	fclose(fp);
}