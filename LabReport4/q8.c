#include<stdio.h>
void main(){
	int array[100],n,i,j,temp=0;
	printf("Enter the number of terms in array : ");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("Assending order : ");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
}