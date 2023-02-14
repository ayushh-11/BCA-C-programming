//WAP to reverse a given number, it can be of any number of digits.
#include<stdio.h>
void main(){
    int n,rev=0,a;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0){
		a=n%10;
    	rev=rev*10+a;
    	n/=10;
    }
    printf("Reversed Number: %d",rev);
}   
