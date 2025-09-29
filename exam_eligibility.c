/*
Name ; Felix Omondi
Reg NO : PA106/G/28817/25
Description : Program to check students eligibility for the final exams
Date : 28 Sep ,2025
*/

#include<stdio.h>

//main function
 int main (){
	
	 int attendance,average_marks;
	  
	  printf("Enter attendance: \n");
	  scanf("%d",&attendance);
	  
	  printf("Enter average_marks: \n"  );
	  scanf("%d",&average_marks);
	  
	  if(attendance >=75 &&average_marks>=40){
		  printf("You are eligible to take exams");
	  }
	  //anything different from the required ,the following wiil be displayed
	  
	  else{
		  printf("NOT ELIGIBLE");
	  }
	
	
	
	 
	
	
	return 0;
	 }