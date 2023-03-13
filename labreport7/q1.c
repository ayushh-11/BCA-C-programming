////////Structure variable
#include<stdio.h>
struct table{
	int length;
	int breadth;
	int height;
}measurement;
void main(){
	int volume;
	measurement.length=5;
	measurement.breadth=6;
	measurement.height=7;
	volume=measurement.length*measurement.breadth*measurement.height;
	printf("Volume = %d",volume);
}