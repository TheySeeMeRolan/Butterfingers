#include "EnginePartBuilder.h"

using namespace std;

void EnginePartBuilder::buildPart(){
    this->enginePart = new Engine();
}

Engine* EnginePartBuilder::getPart(){
    return this->enginePart;
}

EnginePartBuilder::EnginePartBuilder(){

}