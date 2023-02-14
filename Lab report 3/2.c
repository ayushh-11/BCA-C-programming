//Write a program to display table from 1-10.
#include<stdio.h>
void main(){
	int a,b,c;
	for(a=1;a<=10;a++){
		for(b=1;b<=10;b++){
			c=a*b;
			printf("%dx%d=%d\n",a,b,c);
		}
		printf("\n");
	}
}
