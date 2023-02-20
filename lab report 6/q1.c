#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr,x=10;
	ptr=&x;
	printf("Address of x = %d",ptr);
	printf("\nValue of x = %d",*ptr);
}