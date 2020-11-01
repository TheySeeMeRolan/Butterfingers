#include "ChasisFactory.h"

ChasisFactory::ChasisFactory(Team* t): HumanFactory(t){

}

Human* ChasisFactory::makeEngineer(Human * s){
    Human* re= new ChasisEngineer(getTeam(), s);
    return re;
}

Human* ChasisFactory::makePersonnel(Human * s){
    Human* re= new Strategist(getTeam(), s);
    return re;
}