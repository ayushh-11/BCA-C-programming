#include<stdio.h>
int greater(int a,int b);
void main(){
	int a,b;
	printf("Enter two numbers a, b: ");
	scanf("%d,%d",&a,&b);
	greater(a,b);
}
int greater(int a,int b){
	if(a>b)
		printf("%d is greater",a);
	else
		printf("%d is smaller",b);
}