#include "project.h"

int main(int argc, char *argv[]){

    if(argc > 1){
        int number = atol(argv[1]);
        srand(number);
    }
    else{
        srand(7);
    }

    warCard *deck = craftDeck();
    printNumberOfCards(deck);
    printHand(deck);
    sleep(2);
    deck = shuffle(deck);
    printf("########\n");
    printHand(deck);
    printNumberOfCards(deck);
}
