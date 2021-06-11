#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <math.h>


typedef struct card{

    int val;
    char suit[10];
    char rank[10];


}warCard;


char *getSuit(warCard *);

char *getRank(warCard *);

int getVal(warCard *);

int showdown(warCard *, warCard *);

int countCards(warCard *);

void startGame();

void initializePlayerHand();

void initializeComputerHand();

warCard *deal();

warCard *shuffle(warCard *);
