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
            std::cout<<   "-------"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"--Running the Friday European Practice race in: " + location +"--"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"-------"<<"\n";
        }
        else if(dayCounter==0) {
            std::cout<<   "-------"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"--Running the Friday Non-European Practice race in: " + location +"--"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"-------"<<"\n";
        }
        else if(dayCounter==1 && track->isEuropean()) {
            std::cout<<   "-------"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"--Running the Saturday European Practice race in: " + location +"--"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"-------"<<"\n";
        }
        else if(dayCounter==1) {
            std::cout<<   "-------"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"--Running the Saturday Non-European Practice race in: " + location +"--"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"\U0001F534"<<"-------"<<"\n";

        }
        else if(dayCounter==2 && track->isEuropean()) {
            std::cout<<   "-------"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"-------Running the European Qualifying race in:" + location +"--"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"------------"<<"\n";

        }
        else if(dayCounter==2) {
            std::cout<<   "-------"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"-------Running the Non-European Qualifying race in:" + location +"--"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"\U0001F7E1"<<"------------"<<"\n";
        }
        else if(dayCounter==3 && track->isEuropean())
        {
            std::cout<<   "-------"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"-------Running the European ACTUAL race in:" + location +"-------"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"-------"<<"\n";


//            std::cout<<"--Running the European Race in: " + location +"--\n";
        }
        else if(dayCounter==3) {
            std::cout<<   "-------"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"-------Running the Non-European ACTUAL race in:" + location +"-------"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"\U0001F7E2"<<"-------"<<"\n";

        }

        cout<<setw(30)<<left<<""<<" ==== 3 . . 2 . . 1 . . . GO ====" <<endl;
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
        cout<<setw(22)<<""<< setw(45)<<"Team " + teamsCopy[k]->getTeamResources()->getCompany() +" finished in position: " << logStatement[k]+1 << endl;
    }
    cout<<endl<<setw(30)<<left<<""<<" ======= Race completed =======" <<right<<endl;

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
        cout<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"
        <<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699  "
        <<setw(65)<<team->getTeamResources()->getCompany()+" ships its cars to the factory to get serviced  "<<
        "\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699"<<"\U00002699  "<<endl;
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
        cout<<endl<<endl;
        cout<< "--------------"<<"\U0001F3C1"<<"\U0001F6A5"<<"\U0001F3C1"<<"---"<<"\U0001F3C1"<<"\U0001F6A5"<<"\U0001F3C1";
        cout <<" RACE WEEEKEND IN "<< getLocation()<<" ( WEEK "<<teams[0]->getTeamResources()->getCurrentWeek()<<" ) ";
        cout<< "\U0001F3C1"<<"\U0001F6A5"<<"\U0001F3C1"<<"---"<<"\U0001F3C1"<<"\U0001F6A5"<<"\U0001F3C1"<<"--------------"<<endl;

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

tuple<string, int> Race::getCompanyWithBestCar() {
    string bestTeamName = "";
    int tyreScore;
    int engineScore;
    int chasisScore;
    int electronicScore;
    int spoilerScore;
    int bestCarStats = -1, temp;

    for (auto & team : teams) {
        tyreScore = team->getTeamResources()->getTyre()->getPressure()  + team->getTeamResources()->getTyre()->getThread();
        // each team will get an engineScore based on their car's engine's horsepower and torque
        engineScore = team->getTeamResources()->getEngine()->getHorsePower()  + team->getTeamResources()->getEngine()->getTorque();
        // each team will get an chasisScore based on their car's chasis and its height setting and aerodynamicsScore
        chasisScore = team->getTeamResources()->getChasis()->getHeight()  + team->getTeamResources()->getChasis()->getAerodynamicsScore();
        // each team will get an electronicsScore based on their car's electronics setting
        electronicScore = team->getTeamResources()->getElectronics()->getEfficiency();
        // each team will get a spoilerScoer based on their car's spoilers weight and aerodynamicsScore
        spoilerScore = team->getTeamResources()->getSpoiler()->getWeight()  + team->getTeamResources()->getSpoiler()->getAerodynamicsScore() ;

        temp = tyreScore + engineScore + chasisScore + electronicScore + spoilerScore;

        if(temp > bestCarStats) {
            bestCarStats = temp;
            bestTeamName = team->getTeamResources()->getCompany();
        }
    }
    return make_tuple(bestTeamName, bestCarStats);
}





