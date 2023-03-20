#include<stdio.h>
void main(){
	FILE *sfp,*dfp;
	char c;
	sfp=fopen("copy.txt","r");
	if(sfp==NULL){
		printf("Cannot open file.");
		exit(0);
	}
	dfp=fopen("newFile.txt","w");
	if(dfp==NULL){
		printf("Cannot create file");
		exit(0);
	}
	while((c=fgetc(sfp))!=EOF){
		fputc(c,dfp);
	}
	printf("File copied successfully.");
	fclose(sfp);
	fclose(dfp);
}