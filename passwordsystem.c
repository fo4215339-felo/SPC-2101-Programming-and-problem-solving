/*
Name : Felix Omondi
Reg No : Pa106/g/28817/25
Description : A programme to promt the user to enter the correct password

*/

#include<stdio.h> //preprocessor directive

int main() {
	//Declaring the variables
	int password ;
	
	do {
		printf("Enter password  ");
		scanf("%d",&password);
		
	}
	while (password != 1234);
		printf("\nAcess granted");
	  
	
	return 0;
	}
