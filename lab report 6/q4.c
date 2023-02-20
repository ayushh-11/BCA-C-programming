#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr,n;
	printf("Enter numbers of terms : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Memory cannot be allocated");
		exit(0);
	}
	printf("Enter numbers : \n");
	for(int i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(int i=0;i<n;i++){
		printf("Element [%d] = %d\n",i+1,*(ptr+i));
	}
	free(ptr);
}