#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c;
	printf("Enter two integers: ");
	scanf("%d %d",&a,&b);
	c=pow(a,b);
	printf("%d raised to the power %d is %d.\n",a,b,c);
	c=pow(b,a);
	printf("%d raised to the power %d is %d.\n",b,a,c);
	
}
