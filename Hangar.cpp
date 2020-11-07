#include "Hangar.h"

Hangar::Hangar(){

}


Hangar::Hangar(CarMemento* car){
    stored= car;
}

CarMemento* Hangar:: retrieveMemento(){
    return stored;
}
    
void Hangar::storeMemento(CarMemento* car){
    stored= car;
}
   
    