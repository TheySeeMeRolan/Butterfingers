#include "Human.h"

Human::Human(){

}

Human::Human(Team* t){
    team= t;
}

Human::~Human(){
    if (successor){
        delete successor;
    }
    if (team){
        delete team;
    }
    
}