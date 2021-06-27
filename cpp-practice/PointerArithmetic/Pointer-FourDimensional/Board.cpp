#include "Board.hpp"

Board::Board(){

    size1 = 4;
    size2 = 4;
    size3 = 4;
    size4 = 4;

    int ****board = new int***[size1];
    *(board+0) = new int**[size2];
    *(*(board+0)+0) = new int*[size3];
    *(*(*(board+0)+0)) = new int[size4];

}


Board::Board(int newSize1, int newSize2, int newSize3, int newSize4){

    size1 = newSize1;
    size2 = newSize2;
    size3 = newSize3;
    size4 = newSize4;

    int ****board = new int***[size1];
    *(board+0) = new int**[size2];
    *(*(board+0)+0) = new int*[size3];
    *(*(*(board+0)+0)+0) = new int[size4];

}

Board::~Board(){

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            for(int k = 0; k < size3; k++){
                delete []*(*(*(board+i)+j)+k);
            }
            delete []*(*(board+i)+j);
        }
        delete []*(board+i);
    }
    delete []board;

}