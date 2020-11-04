#include "Human.h"

// Human::Human(){

// }

Human::Human(Team* t, Human * s,TeamResources* tR)
{
    team= t;
    successor = s;
    teamResources = tR;
}

Human::~Human(){
//    if (successor){
//        delete successor;
//    }
//    if (team){
//        delete team;
//    }
//
}



Human* Human::getSuccesor(){
    return successor;
}

string Human::getTypeHuman(){
    return typeHuman;
}