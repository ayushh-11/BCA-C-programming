#include<stdio.h>
void pointer(int *x,int *y){
	printf("Value of a = %d\n",*x);
	printf("Value of b = %d\n",*y);
	printf("Address of a = %u\n",x);
	printf("Address of b = %u\n",y);
}
void main(){
	int a,b;
	printf("Enter a, b : ");
	scanf("%d,%d",&a,&b);
	pointer(&a,&b);
}