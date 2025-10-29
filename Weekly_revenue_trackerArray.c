/*
Name : Felix Omondi 
Reg No: PA106/G/28817/25
Description ; A program to build a Weekly Revenue Tracker
Date ;27.Oct.2025
*/

#include<stdio.h> 


int main(){
	float revenue[7];
	float total=0;
	float average;
	int i;
	
//prompt the user to enter the daily revenue
	printf("Enter the revenue for each day\n");
	
	
	for(i=1;i<=7;i++){
	printf("Days %d :",i);
	scanf("%f",&revenue[i]);
	//adding the revenues as they are being entered
	total+=revenue[i];	
	}
	average=total/7;
	
//	displaying the results for the whole week
printf("The Total weekly revenue is :%.2f",total);
printf("The Average daily revenue is :%.2f",average);

	return 0;
}