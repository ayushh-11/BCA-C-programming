#include<stdio.h>
int greater(int a,int b);
void main(){
	int a,b;
	printf("Enter two numbers a, b: ");
	scanf("%d,%d",&a,&b);
	printf("Greater number is %d",greater(a,b));
}
int greater(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}