#include "project.h"

int playerScore = 0;
int computerScore = 0;

int generateRandomNumber(){

    long number = rand();
    int twoNumber = rand() % number;
    return twoNumber;

}

void displayScore(){

    printf("\n!#!#!#!#SCORE DISPLAY!#!#!#!#\n\nPLAYER SCORE : %d\n\nCOMPUTER SCORE : %d\n\n",playerScore,computerScore);

}

void correctGuess(){

    printf("\n\nTHE GUESS IS\n\n....");
    printf("CORRECT!\n");
    playerScore++;

}

void incorrectGuess(){

    printf("\n\nTHE GUESS IS\n\n....");
    printf("INCORRECT!\n");
    computerScore++;

}

int getPlayerGuess(){

    printf("\n\nPLAYER, GUESS AN EVEN NUMBER\n\n");
    int guess;
    scanf("%d",&guess);
    return guess;

}


int getComputerGuess(){

    printf("\n\nCOMPUTER, GUESS AN EVEN NUMBER\n\n");
    int guess;
    while(1){
        int theNumber = generateRandomNumber();
        if(theNumber % 2 == 0){
            guess = theNumber;
            break;
        }
    }
    return guess;

}