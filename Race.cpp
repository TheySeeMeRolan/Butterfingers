#include "Race.h"

Race::Race(Track *t) {
    track = t;
    location = track->getLocation(); //track must get a getLocation() method....
    date = 0;
    equipment = nullptr;
    update();
    european = track->isEuropean();
}

Race::~Race() {
    location = "";
    date = 0;
    european = false;
    teams.clear();
    logStatement.clear();
    track = nullptr;
    equipment = nullptr;
    delete strategy;
    strategy = nullptr;
}

void Race::update() {
    switch (date) {
        case 0:
            delete strategy;
            strategy = new PracticeStrategy();
            break;
        case 1:
            delete strategy;
            strategy = new QualifyingStrategy();
            break;
        case 2:
            delete strategy;
            strategy = new RaceStrategy();
            break;
        default:
            delete strategy;
            strategy = nullptr;
    }
}

void Race::race() {
    strategy->race(teams,track);
}

Track* Race::getTrack() {
    return track;
}

void Race::addTeam(Team *t) {
    teams.push_back(t);
}

void Race::StoreEquipment(Equipment *equipment) {
    this->equipment = equipment;
}

vector<int> Race::getLogStatement() {
    return logStatement;
}





