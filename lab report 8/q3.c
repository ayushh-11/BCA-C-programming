#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char c;
	fp=fopen("document.txt","w");
	if(fp==NULL){
		printf("File cannot be opened.");
		exit(0);
	}
	printf("Enter the text to write and press enter to save :\n");
	while ((c = getchar()) != '\n'){
		fputc(c,fp);
	}
	fclose(fp);
	return 0;
}