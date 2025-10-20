/*
Name : Felix Omondi 
Reg No : PA106/G/28817/25
Description : A program involving return function to accept user input to calculate distance covered
Date : 20. Oct ,2025
*/


#include<stdio.h>
//function prototype
float calculateFare(float distance);

int main(){
	float distance ;
	float total_fare;
	
	printf("/nEnter the total distace covered :");
	scanf("%f",&distance);
	
	//function call
	total_fare= calculateFare(distance);
	
	//display the total fare
	printf("The Total fare is : %.2f km \n",total_fare);
	
	
	
return 0;	
}

//function declaration
float calculateFare(float distance){
      float fare;
      fare=distance*50;
      
      return fare;
      
}

