#include "FootballPlayer.hpp"


FootballPlayer::FootballPlayer(){

    name = "Yankee McDiverson";
    age = 20;

}

FootballPlayer::FootballPlayer(string newName){

    name = newName;

}

FootballPlayer::FootballPlayer(string newName, int newAge){

    name = newName;
    age = newAge;

}

FootballPlayer::~FootballPlayer(){

    cout << "Deleting football player : " << name << endl;
    delete this;
}