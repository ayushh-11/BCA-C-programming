#include<stdio.h>
void main(){
	int n,n1,n2,i,j,k;
	char names[100][50];
	char temp[50];
	printf("Enter number of students : ");
	scanf("%d",&n);
	printf("Enter students name: \n");
	for(i=0;i<n;i++){
		scanf("%s",names[i]);
	}
	for(i=0;i<n-1;i++){
		for(k=i+1;k<n;k++){
			for(j=0;j<strlen(names[i]);j++){
				n1=names[i][j];
				n2=names[k][j];
				if(n1>n2){
					strcpy(temp, names[i]);
					strcpy(names[i], names[k]);
					strcpy(names[k], temp);
					break;
				}
				else if(n1!=n2)
					break;	
			}
		}
	}
	printf("In assending order : \n");
	for(i=0;i<n;i++){
		printf("%s\n",names[i]);
	}
}