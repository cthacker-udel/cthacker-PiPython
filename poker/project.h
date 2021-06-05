#include <signal.h>
#include "sense.h"
#include <linux/input.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

typedef struct card{

    char suit;
    int rank;
    struct card *next;


}pokerCard;


void openJoystick(void);
void closeJoystick(void);
void checkJoystick(void);
void handler(unsigned int);


void openDisplay(void);
void closeDisplay(void);
void clearDisplay(void);

