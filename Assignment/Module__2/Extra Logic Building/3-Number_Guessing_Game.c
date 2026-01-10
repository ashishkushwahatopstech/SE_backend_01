#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber;
    int userGuess;
    int tries = 0;
    int maxTries = 5;

    
    //srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d tries to guess it.\n\n", maxTries);

    
    while (tries < maxTries) {
        printf("Try %d - Enter your guess: ", tries + 1);
        scanf("%d", &userGuess);
        tries++;

        if (userGuess == secretNumber) {
            printf("?? Correct! You guessed the number in %d tries.\n", tries);
            return 0;  
        } else if (userGuess < secretNumber) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }

    
    printf("?? Sorry! You've used all %d tries.\n", maxTries);
    printf("The correct number was: %d\n", secretNumber);

    return 0;
}

