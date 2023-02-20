#include<stdio.h>
void arrayPointer(int *ptr[],int n){
	for(int i=0;i<n;i++){
		printf("Pointer [%d] = %d\n",i+1,*ptr[i]);
	}
}
void main(){
	int n,array[50],*ptr[50];
	printf("Enter numbers of terms : ");
	scanf("%d",&n);
	printf("Enter terms\n");
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
		ptr[i]=&array[i];
	}
	arrayPointer(ptr,n);
}