#include<stdio.h>
void swap(int *x, int *y);
void main(){
	int x,y;
	printf("Enter x, y :");
	scanf("%d,%d",&x,&y);
	printf("Before swap function, x = %d, y=%d",x,y);
	swap(&x,&y);
	printf("\nAfter swap function, x = %d, y=%d",x,y);
}
void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}