//WAP to check whether number is palindrome or not?
#include<stdio.h>
void main(){
    int orig,n,rev=0,a;
    printf("Enter a number: ");
    scanf("%d", &orig);
    
	n=orig;
	
    while(n!=0){
		a=n%10;
    	rev=rev*10+a;
    	n/=10;
    }
    
    if(orig==rev)
    	printf("%d is a palindrome number.",orig);
    else
    	printf("%d is not a palindrome number.",orig);
}   
