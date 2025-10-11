/*
   1. Name :Felix Omondi 
   2.Reg No.PA106/G/28817/25
   3.Description;PROGRAM TO PROMT USER TO ENTER DETAILS
*/
//main function

#include <stdio.h>

int main(){


float BANK_BALANCE;
int ID;
float HEIGHT;

printf("Enter your ID\n");
scanf("%d", &ID);

printf("Enter your HEIGHT\n");
scanf("%f", &HEIGHT);

printf("Enter your BANK BALANCE\n");
scanf("%f", &BANK_BALANCE);

   printf("ID:%d\n",ID);
   printf("Height:%f\n",HEIGHT);
   printf("Bank balance:%f\n",BANK_BALANCE);




return 0;
}
