#include<stdio.h>
#include<stdlib.h>
void main(){
	FILE *fp;
	fp=fopen("bca.text","w");
	if(fp==NULL){
		printf("Error opening file");
		exit(0);
	}
	fprintf(fp,"I study BCA");
	fclose(fp);
}