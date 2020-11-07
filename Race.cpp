#include "Race.h"
#include "Team.h"

Race::Race(Track *t, string location,Log* logIn) {
    track = t;
    this->location = location;
    date = 0;
    update();
    european = track->isEuropean();
    log = logIn;
//    count =0;
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
            strategy = new PracticeStrategy();
            break;
        case 1:
            delete strategy;
            strategy = new PracticeStrategy();
            break;
        case 2:
            delete strategy;
            strategy = new QualifyingStrategy();
            break;
        case 3:
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
    while (dayCounter < 4) {

        if(dayCounter==0 && track->isEuropean()) {
            std::cout<<"--Running the Friday European Practice race in: " + location +"--\n";
        }
        else if(dayCounter==0) {
            std::cout<<"--Running the Friday Non-European Practice race in: " + location +"--\n";
        }
        else if(dayCounter==1 && track->isEuropean()) {
            std::cout<<"--Running the Saturday European Practice race in: " + location +"--\n";
        }
        else if(dayCounter==1) {
            std::cout<<"--Running the Saturday Non-European Qualifying race in: " + location +"--\n";
        }
        else if(dayCounter==2 && track->isEuropean()) {
            std::cout<<"--Running the European Qualifying race in: " + location +"--\n";
        }
        else if(dayCounter==2) {
            std::cout<<"--Running the Non-European Qualifying race in: " + location +"--\n";
        }
        else if(dayCounter==3 && track->isEuropean()) {
            std::cout<<"--Running the European Race in: " + location +"--\n";
        }
        else if(dayCounter==3) {
            std::cout<<"--Running the European Race in: " + location +"--\n";
        }

        teams = strategy->race(teams,track, tyreSets); //teams will be set according to race strategy's race method qualifying will reshuffle the teams such that the starting positions are different
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
    for (int k = 0; k < logStatement.size(); ++k) {
        cout <<"Team " << teamsCopy[k]->getTeamResources()->getCompany()<<" finished in position: " << logStatement[k]+1 << endl;
    }

    int size = logStatement.size();
    logStatement.clear();

    for (int k = 0; k < size; ++k) {
        if(logStatement[k]==0) {
            logStatement.push_back(25);
        }
        else if (logStatement[k]==1) {
            logStatement.push_back(18);
        }
        else if (logStatement[k]==2) {
            logStatement.push_back(15);
        }
        else if (logStatement[k]==3) {
            logStatement.push_back(12);
        }
        else if (logStatement[k]==4) {
            logStatement.push_back(10);
        }
        else if (logStatement[k]==5) {
            logStatement.push_back(8);
        }
        else if (logStatement[k]==6) {
            logStatement.push_back(6);
        }
        else if (logStatement[k]==7) {
            logStatement.push_back(4);
        }
        else if (logStatement[k]==8) {
            logStatement.push_back(2);
        }
        else if (logStatement[k]==9) {
            logStatement.push_back(1);
        }
    }

    cout << endl;

    log->addScores(logStatement);

    log->printStandings();

    cout << endl;

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





