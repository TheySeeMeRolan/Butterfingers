#include "Personnel.h"

//Personnel::Personnel():Human(){
//
//}

Personnel::Personnel(Team* t, Human * s,TeamResources* tR):Human(t, s,tR){
    
}

void Personnel::handleRequest(string s) {
    Human::handleRequest(s);
}
