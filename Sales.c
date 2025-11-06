
/*
Name:Felix Omondi
Reg No:PA106/G/28817/25
Description:Peogram to Track Borrowed Books 
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	 FILE *fptr;
	 float amount,total ;
	 	          
 fptr =fopen ("C:\\Users\\Admin\\OneDrive\\Desktop\\C programs\\sales.txt","a");	    
  if(fptr== NULL){
	  printf("Error opening the file \n"); 
	  return 1;
  }	 
  (fscanf(fptr,"f",&amount)==1);{
	  total+=amount ;
  }
  fclose(fptr);   
printf ("Todays total sale :%.2f\n",total);	    
	    
	return 0;
}


