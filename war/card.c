#include "project.h"

warCard *deck = NULL;


warCard *createCard(char *rank, char *suit, int val){
    warCard *newCard = (warCard *)malloc(sizeof(warCard));
    strcpy(newCard->rank,rank);
    strcpy(newCard->suit,suit);
    newCard->val = val;
    newCard->next = NULL;
    return newCard;
}


warCard *craftDeck(){
    char suits[][10] = {"Hearts","Clubs","Diamonds","Spades"};
    char ranks[][10] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace"};
    for(int j = 0; j < 4; j++){
        for(int i = 1; i <= 13; i++){
            if(deck == NULL){
                deck = createCard(ranks[i-1],suits[j],i);
            }
            else{
                warCard *newCard = createCard(ranks[i-1],suits[j],i);
                newCard->next = deck;
                deck = newCard;
            }
        }
    }
    return deck;
}