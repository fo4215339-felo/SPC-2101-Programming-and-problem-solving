/*
Name : Felix Omondi
Reg NO: PA106/G/28817/25
Description : Program to calculate simple interest.

*/

#include<stdio.h>

//main function
int main(){
	
	float principal_amount,time,simple_interest;
	int rate ;
	
	printf("Enter Principal_amont;\n");
	scanf ("%f",&principal_amount);
	
	printf("Enter time:\n");
	scanf("f",&time);
	
	printf("Enter rate:\n");
	scanf ("%d",&rate);
	
	simple_interest = (principal_amount*time*rate)/100;
	
	printf("Simple interest:%f \n",simple_interest );
	
	
	return 0;
}