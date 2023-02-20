#include<stdio.h> 
	void main(){
	int *ptr1,**ptr2,x=5;
	ptr1=&x;
	ptr2=&ptr1;
	printf("Address of x = %u",ptr1);
	printf("\nAdrress of ptr1 = %u",ptr2);
	printf("\nvalue of x (At address of ptr1) = %d",**ptr2);
	
	
}