#include "Human.h"

// Human::Human(){

// }

Human::Human(Team* t, Human * s){
    team= t;
    successor = s;
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