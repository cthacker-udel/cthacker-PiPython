#include "project.h"




int add(node *newNode){

    if(size() == MAX_SIZE){
        printf("\n-=-=-=SIZE ERROR-=-=-=\nINCREASE SIZE BEFORE ADDING NODES\n-=-=-=-=-=-=-=-=-=-=-=-=\n");
        return 0;
    }
    else{
        if(HEAD == NULL){
            HEAD = newNode;
            TAIL = newNode;
        }
        else{

            node *tempHead = HEAD;
            while(tempHead->next != NULL){
                tempHead = tempHead->next;
            }
            tempHead->next = newNode;
            newNode->previous = TAIL;
            TAIL = newNode;
        }
    }

}

node *craftNode(){

    int value;
    printf("\n-=-=-=USER INPUT-=-=-=\nEnter a value to assign to new node : ");
    scanf("%d",&value);
    node *newNode = (node *)malloc(sizeof(node));
    newNode->value = value;
    return newNode;

}

node *element(){

    return TAIL;

}