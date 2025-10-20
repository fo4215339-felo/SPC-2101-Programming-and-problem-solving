/*
Name : Felix Omomndi
Reg NO : PA106/28817/25
Description : A programme of return function used to calculate total water bills consumed
Date : 20.Oct ,2025
*/

#include<stdio.h>

//function prototype
float calculateElectricBill(int units);


int main (){
	
	int units;
	float totalbills;
	
	printf("\nEnter the number of units:  ");
	scanf("%d",&units);
	
	//call the function
	totalbills=calculateElectricBill(units);
	
    //display the totalbill
    printf("Total bills : ksh%.2f \n",totalbills);


return 0;
}
//function declaration
float calculateElectricBill(int units){
    float Electricbill;
    
    //units less than or equal to 100
    if(units<=100){
		Electricbill=units*10;
	}
	
	//units equal to 100 and less than or equal to 200
	else if(units==100&& units <=200){
		Electricbill=(100*10)+(units-100)*15;
	}
    
    //units greater than 200
    else if (units>200){
		Electricbill=(100*10)+(100*15)+(units-200)*20;
	}
	
	return Electricbill;
}