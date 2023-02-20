#include<stdio.h>
void main(){
	int *ptr[3],x[3]={2,5,6},i;
	for(i=0;i<3;i++){
		ptr[i]=&x[i];
		printf("Array[%d]=%d\n",i,*ptr[i]);
	}
}