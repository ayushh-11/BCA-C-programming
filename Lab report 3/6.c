//WAP to check whether a number is prime or not?
#include<stdio.h>
void main(){
	int a=0,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(n%i==0)
			a++;
	}
	if(a==2)
		printf("%d is a prime number.",n);
	else
		printf("%d is not a prime number.",n);
}
