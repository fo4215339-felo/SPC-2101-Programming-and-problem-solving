
/*
Name:Felix Omondi
Reg No:PA106/G/28817/25
Description:Peogram to Track Borrowed Books 
*/


#include<stdio.h>
#include <stdlib.h>
int main()
{
	char title[50] ;
	FILE *fptr ;
	
fptr =fopen ("C:\\Users\\Admin\\OneDrive\\Desktop\\C programs\\borrowed_books.txt","a");
	
//Enter the book titles 	
	printf("Enter book title: ");
	fgets(title,50,stdin);
	
//store in file 
fprintf(fptr,"%s",title);
 
 fclose(fptr);
 
 printf("Book title stored successfully in borrowes_books.txn\n");	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}