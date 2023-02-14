#include<stdio.h>
int min(int array[100],int n);
void main(){
	int array[100], n,i;
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	min(array,n);
}
int min (int array[100],int n){
	int temp=array[0];
	for(int i=1;i<n;i++){
		if(temp>array[i])
			temp=array[i];
	}
	printf("Minimum value is %d",temp);
}