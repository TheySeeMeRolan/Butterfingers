#include "CarPart.h"
using namespace std;

CarPart::CarPart(string typ)
{
    this->type = typ;
}

CarPart::~CarPart(){
    cout << "Destructed CarPart (base)" << endl;
}

string CarPart::getType(){
    return this->type;
}