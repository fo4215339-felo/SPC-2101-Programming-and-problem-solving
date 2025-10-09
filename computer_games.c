/*
Name ; Felix Omondi
Reg NO: PA106/G/28817/25
Description :  A program to prompt the user a secrete number for a game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("choose a number between 1 and 20.\n");

    // Repeat until the correct guess
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } 
        else {
            printf(" Congratulations! You guessed the correct number: %d\n", secretNumber);
        }

    } while (guess != secretNumber);

    return 0;
}