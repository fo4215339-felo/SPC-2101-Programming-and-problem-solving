/*
Name:Omondi Felix
Reg No:PA106/G/28817/25
Description:Programme to calculate the Surface area and Volume of a cylinder.

*/

#include<stdio.h>

int main(){
	
	const double PI = 3.142857;
	double radius;
	double height;
	double surface_area,volume;
	
	printf("\nEnter radius");
	scanf("%lf",&radius);
	
	printf("\nEnter height");
	scanf("%lf",&height);
	
	surface_area=(2*PI*radius*radius)+(2*PI*radius*height);
	volume=(PI*radius*radius*height);
	
	printf("Surface_area:%lf",surface_area);
	printf("Volume:%lf",volume);
	
	return 0;
} 




