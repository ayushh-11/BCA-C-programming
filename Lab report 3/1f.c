#include<stdio.h>
void main(){
	int a,b,c,d;
	for(a=1;a<=5;a++){
		for(b=4;b>=a;b--)
			printf(" ");
		for(c=1;c<=a;c++)
			printf("%d",a);
		for(d=2;d<=a;d++)
			printf("%d",a);
		printf("\n");
	}
}
