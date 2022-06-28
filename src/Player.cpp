#include "Player.hpp"
#include <iostream>

using namespace std;

void Player::solve(/*args?*/){
    //"resolve o problema com base no mapa, a posição atual da cobra e a posição atual da comida"
}

int Player::nextAction(){
    //sorteia uma ação aleatória que não causa morte
    /*retorna uma ação aleatória entre 0 e 4*/
    return rand()%4;
}