#include<stdio.h>
void main(){
	int *ptr[5],x[5]={2,4,6,8,10},i;
	for(i=0;i<5;i++){
		ptr[i]=&x[i];
		printf("\n%d",*ptr[i]);
	}
}