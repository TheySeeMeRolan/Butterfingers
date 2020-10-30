#include "Race.h"

Race::Race(Track *t) {
    track = t;
    location = track->getLocation(); //track must get a getLocation() method....
    date = 0;
    equipment = nullptr;
    update();
    european = track->isEuropean();
}

void Race::update() {
    if(date==0) {
        delete strategy;
        strategy = new
    }
}

