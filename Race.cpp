#include "Race.h"
#include "Team.h"

Race::Race(Track *t, string location) {
    track = t;
    this->location = location;
    date = 0;
    update();
    european = track->isEuropean();
    count =0;
}

Race::~Race() {
    location = "";
    date = 0;
    european = false;
    teams.clear();
    logStatement.clear();
    track = nullptr;
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
            date = 0;
            delete strategy;
            strategy = nullptr;
    }
}

void Race::race() {
    int dayCounter = 0;
    vector<Team*> teamsCopy = teams;
    while (dayCounter < 3) {

        if(dayCounter==0 && track->isEuropean()) {
            std::cout<<"--Running a European Practice race in: " + location +"--\n";
        }
        else if(dayCounter==0) {
            std::cout<<"--Running a Non-European Practice race in: " + location +"--\n";
        }
        else if(dayCounter==1 && track->isEuropean()) {
            std::cout<<"--Running a European Qualifying race in: " + location +"--\n";
        }
        else if(dayCounter==1) {
            std::cout<<"--Running a Non-European Qualifying race in: " + location +"--\n";
        }
        else if(dayCounter==2 && track->isEuropean()) {
            std::cout<<"--Running a European Race in: " + location +"--\n";
        }
        else if(dayCounter==2) {
            std::cout<<"--Running a European Race in: " + location +"--\n";
        }

        teams = strategy->race(teams,track); //teams will be set according to race strategy's race method qualifying will reshuffle the teams such that the starting positions are different
        date++;
        this->update(); //changes the strategy based on the date variable
        dayCounter++;
        std::cout<<std::endl;
    }

    for (int i = 0; i < (int)teamsCopy.size(); i++) {
        for (int j = 0; j < (int)teamsCopy.size(); j++) {
            if(teamsCopy[i]==teams[j]) {
                logStatement.push_back(j);
                break;
            }
        }
    }
    teams = teamsCopy;
    for(auto& team: teams) {
        team->service();
    }
    teamsCopy.clear();
}

Track* Race::getTrack() {
    return track;
}

void Race::addTeam(Team *t) {
    teams.push_back(t);
    if(teams.size()==10){
        race();
    }
}

void Race::storeEquipment(Equipment* teamEquipment){
    equipment.push_back(teamEquipment);
}

vector<int> Race::getLogStatement() {
    return logStatement;
}

bool Race::isEuropean() {
    return european;
}

string Race::getLocation() {
    return location;
}

void Race::shipTyres(vector<int> t) {
    tyreSets.push_back(t);
}





