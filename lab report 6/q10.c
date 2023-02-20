#include<stdio.h>
void main(){
	int a,b,*ptr1,*ptr2,sum;
	printf("Enter a, b : ");
	scanf("%d,%d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	sum=*ptr1+*ptr2;
	printf("\nSum = %d",sum);
}