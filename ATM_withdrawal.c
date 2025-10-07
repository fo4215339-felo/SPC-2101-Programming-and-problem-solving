/*
Name : Felix Omondi
Reg No : PA106/28817/25
Description : A c program that uses while loop to simulate ATMwithdrawal untill the balance is zero
Date ; 6 Oct 2025
*/


#include <stdio.h>

int main() {
    //declaring the variables
	float balance, withdraw;

   
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Continue withdrawing while balance is greater than zero
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;  // Deduct withdrawal from balance

        // Display current balance in the account
        printf("Remaining balance: %.2f\n", balance);

        // Check if balance is zero or negative
        if (balance <= 0) {
            printf("\nYour account balance is insufficient for further withdrawals.\n");
            break;
        }
    }

    
    return 0;
}