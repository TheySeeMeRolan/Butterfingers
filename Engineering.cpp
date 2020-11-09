#include "Engineering.h"

//Engineering::Engineering(): Human(){
//
//}

Engineering::Engineering(Team* t, Human * s,TeamResources* tR): Human(t, s,tR){
    
}

void Engineering::handleRequest(string p)
{
    Human::handleRequest(p);
}
