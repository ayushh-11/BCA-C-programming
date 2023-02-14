#include<stdio.h>
void main(){
	int i,j=0,c=0;
	char str[50];
	printf("Enter a string : ");
	scanf("%s",str);
	for(i=strlen(str)-1;i>=(strlen(str)/2);i--){
		if (str[j]==str[i])
			c++;
		j++;
	}
	if(c>=(strlen(str)/2))
		printf("The string is palindrone");
	else
		printf("The string is not palindrone");
}