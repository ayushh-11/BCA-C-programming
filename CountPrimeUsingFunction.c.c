#include<stdio.h>
int primeCount(int start, int end);
void main(){
	int y,x,p;
	printf("Enter starting number : ");
	scanf("%d",&x);
	printf("Enter ending number : ");
	scanf("%d",&y);
	p =	primeCount(x,y);
	printf("\nPrime count = %d",p);
}
int primeCount(int start,int end){
	int pcount = 0,count;
	for(int i=start;i<=end;i++){
		count =0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count ==0){
			pcount++;
		}
	}
	
	return pcount;
}