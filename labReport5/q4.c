#include<stdio.h>
int greater();
void main(){
	printf("\nGreater number is %d",greater());
}
int greater(){
	int a,b;
	printf("Enter a, b :\n");
	scanf("%d,%d",&a,&b);
	if(a>b)
		return a;
	else
		return b;
}