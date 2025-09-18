#include <stdio.h>

int main(){


double BANK_BALANCE;
int ID;
int HEIGHT;

printf("Enter your ID\n");
scanf("%d", &ID);

printf("Enter your HEIGHT\n");
scanf("%d", &HEIGHT);

printf("Enter your BANK BALANCE\n");
scanf("%lf", &BANK_BALANCE);


    printf("\nYou entered:\n");
    printf("\nID : %d\n", ID);
    printf("HEIGHT : %d cm\n", HEIGHT);
    printf("BANK BALANCE : ksh%.2lf\n", BANK_BALANCE);


return 0;
}

