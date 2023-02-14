#include<stdio.h>
void main(){
	int n,i,a=1;
	printf("Enter a number to find factorial: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		a=a*i;
	}
	printf("Factorial of %d is %d",n,a);
}
