////////Structure variable
#include<stdio.h>
struct table{
	int length;
	int breadth;
	int height;
}measurement;
void main(){
	printf("Enter the length of table : ");
	scanf("%d",&measurement.length);
	printf("Enter the breadth of table : ");
	scanf("%d",&measurement.breadth);
	printf("Enter the height of table : ");
	scanf("%d",&measurement.height);
	printf("\nVolume of the table = %d",measurement.length*measurement.breadth*measurement.height);
}