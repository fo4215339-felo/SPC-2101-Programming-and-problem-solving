/*
Name:Omondi Felix
Reg NO.:PA106/G/28817/25
Description:Project to accept user input inorder to qualify for a bank loan.

*/

#include<stdio.h>

int main(){
	
	int age;
	int  income;
	
	printf("\nEnter your age:");
	scanf("%d",age);
	
	printf("\nEnter Annual income:");
	scanf("lf",income);
	
	if(age>=21 ,income>=21000){
		printf("congratulations you qualify for the loan\n");
	}
	
   else{
		printf("Unfortunately, we are unable to offer you a oan at this time\n");
	} 
		
return 0;

}
	
	
	

