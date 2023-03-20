#include<stdio.h>
#include<stdlib.h>
void main(){
	FILE *fp;
	fp=fopen("college.txt","a");
	if(fp==NULL){
		printf("File cannot be opened");
		exit(0);
	}
	fprintf(fp,"I study into BernHardt college,Bafal");
}