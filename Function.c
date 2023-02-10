#include<stdio.h>
int isDivisible(int a[],int divisor,int len);
int i;
void main(){
	int array[100],n,d,notation;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter numbers : \n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("\nEnter divisor : ");
	scanf("%d",&d);
	notation=isDivisible(array,d,n);
	printf("\n%d",notation);
}
int isDivisible(int a[],int divisor,int len){
	int count=0;
	for(i=0;i<len;i++){
		if(a[i]%divisor==0){
			count++;
		}
	}
	printf("%d",len);
	if(count==len)
		return 1;
	else
		return 0;
}