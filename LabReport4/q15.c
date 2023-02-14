#include<stdio.h>
void main(){
	int i,n;
	char str[10];
	printf("Enter a string : ");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){
		n=str[i];
		if(n<=90 && n>=65)
			str[i]=tolower(str[i]);
		else
			str[i]=toupper(str[i]);
	}
	printf("%s",str);
}