#include<stdio.h>
void main(){
	int n,i,c=0;
	char string[50],array[100][100];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("\nEnter all elements : \n");
	for(i=0;i<n;i++){
		scanf("%s",array[i]);
	}
	printf("Enter a string to search : ");
	scanf("%s",string);
	for(i=0;i<n;i++){
		if(strcmp(array[i],string)==0){
			printf("The string is found");
			c=1;
			break;
		}
	}
	if(c!=1)
		printf("String not found");
}