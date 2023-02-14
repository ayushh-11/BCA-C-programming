#include<stdio.h>
void main(){
	char array[10][10];
	array[0][5]="ayush";
	array[1][5]="mahat";
	array[1][10]=array[0];
	printf("%s",array[1]);
}