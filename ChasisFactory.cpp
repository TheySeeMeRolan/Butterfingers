#include "ChasisFactory.h"

ChasisFactory::ChasisFactory(Team* t): HumanFactory(t){

}

Human* ChasisFactory::makeEngineer(){
    Human* re= new ChasisEngineer(getTeam());
    return re;
}

Human* ChasisFactory::makePersonnel(){
    Human* re= new Strategist(getTeam());
    return re;
}