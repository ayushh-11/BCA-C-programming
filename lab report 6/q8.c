#include<stdio.h>
void main(){
	char *ptr[20][50],string[20][50];
	int i,n;
	printf("Enter the numbers of string :");
	scanf("%d",&n);
	printf("Enter strings : \n");
	for(i=0;i<n;i++){
		scanf("%s",string[i]);
		*ptr[i]=string[i];	
	}
	for(i=0;i<n;i++){
		printf("%s is stored\n",*ptr[i]);
	}
}