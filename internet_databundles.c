/*
Name : Felix Omondi
Reg NO : PA106/G/28817/25
Description : Program to display internet data bundles offered
Date : 29 Sep ,2025
*/

#include<stdio.h>

    int main () {
    	int choice;
    	
    	//Displaying the menu
    	printf("Internet bundles provided:");
    	printf("\n1. 100MB - KES 50");
    	printf("\n2. 500MB - KES 200");
    	printf("\n3. 1GB   - KES 350");
    	printf("\n4. 2GB   - KES 600");
    	
    	
    	//Prompt the user to enter choice
    	printf("\nEnter your internet bundles choice");
    	scanf("%d",choice);
    	
    	//use of switch statement
    	switch(choice){
			case 1:
			printf("You have chosen 100MB - KES50");
			break;
	        
	        case 2:
			printf("You have chosen 500MB - KES200");
			break;
		
			case 3: 
			printf("You have chosen 1GB - KES350");
			break;
		
			case 4:
			printf("You have chosen 2GB - KES600");
			break;
	
	
		}
		
		
		return 0;
	}