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
    if (successor){
        cout<<"Deleting "<< this->getTypeHuman()<<endl;
        delete successor;
    }

}



Human* Human::getSuccesor(){
    return successor;
}

string Human::getTypeHuman(){
    return typeHuman;
}

void Human::handleRequest(string s) {

}
