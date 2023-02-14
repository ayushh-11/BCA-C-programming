//Write a program to display square if it is odd and cube if it is even ranging from 1-20.
#include<stdio.h>
void main(){
	int a,b,c;
	for(b=1;b<=20;b++){
		a=b;
		if(a%2==0){
			c=a*a*a;
			printf("%d",c);
		}
		else{
			c=a*a;
			printf("%d",c);
		}
		printf("\n");
	}
}
