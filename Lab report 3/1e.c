#include<stdio.h>
void main(){
	int a,b,c,d;
	for(a=1;a<=5;a++){
		for(b=4;b>=a;b--)
			printf(" ");
		for(c=a;c>=1;c--)
			printf("%d",c);
		for(d=2;d<=a;d++)
			printf("%d",d);
		printf("\n");
	}
}
