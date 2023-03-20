#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp,*fpodd;
	int i,n,numbers,num;
	fp=fopen("data.txt","a");
	if(fp==NULL){
		printf("Cannot open file.");
		exit(0);
	}
	printf("Enter number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fprintf(fp,"%d",i);
	}
	fclose(fp);
	fp=fopen("data.txt","r");
	fpodd=fopen("odd.txt","w");
	while ((num=fgetc(fp))!= EOF) {
		if(num%2==1)
        fputc(num,fpodd);
    }
	fclose(fp);
	fclose(fpodd);
}