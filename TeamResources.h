//
// Created by ro on 2020/11/04.
//
/**
 * @class TeamResources
 * @brief Originator of the memento design pattern
 * implements the createMemento ans reinstantiateMemento methods.
 * @author Joanita Nell (u19006812)
 * **/
#ifndef BUTTERFINGERS_TEAMRESOURCES_H
#define BUTTERFINGERS_TEAMRESOURCES_H


// car builder
#include "vector"
#include "Formula1Car.h"
#include "EnginePartBuilder.h"
#include "TyrePartBuilder.h"
#include "ChasisPartBuilder.h"
#include "ElectronicsPartBuilder.h"
#include "SpoilerPartBuilder.h"

//Memento
#include "CarMemento.h"

// template
#include "Test.h"
#include "WindTunnel.h"
#include "Simulation.h"
#include "Equipment.h"


#include<iostream>
#include<string>
#include<tuple>

class Race;

class TeamResources {
private:
    vector <Race*> upcomingRaces;
    Equipment* teamEquipment;
    Formula1Car* currentCar;
    Formula1Car* futureCar;
    CarPartBuilder* carPartBuilder[5];
    int windTunnelTokens;
    Test * windTest;
    Test * simulationTest;
    string company;


public:
    void construct();
    void cloneCar();
    TeamResources(string);
    string getCompany();
    void test(Formula1Car* c);
    void changeTestType();
    Engine* getEngine();
    Tyre** getTyre();
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();

    //memento functions
    /**
     * @brief paramateized method to create a memento of the formula one car.
     * @param b paramater to test if the memento should be made of the current or future car.
     * when true make memento of the future car. Else when false make memnto of the future car. 
     * **/
    CarMemento* createMemento(bool b);// if bool true create memento of current car else create memento of future car
    /**
     * @brief paramateized method to set a formula one car's attributes from a memento received.
     * @param me the car memento used to set the state of the formula one car.
     * @param b paramater to test if the future or current car's attributes should be set
     * when true set attributes of current car, else when false set attributes of the duture car.
     * **/
    void reinstantiateMemento(CarMemento* me, bool b);// bool is to check for future or current car. if true current car else future car:)

    // template
    void runWindTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void runSimulationTest(Formula1Car *); ///get car from memento store and run test to see if its replaced ///
    void changeTestType(string type);
    ~TeamResources();
    void shipCarToFactory();

    //getters for logistic
    tuple< Race *, Race *, Race *> getUpcomingRaces();
    void setUpcomingRaces(tuple< Race *, Race *, Race *> uR);
    Equipment* getTeamEquipment();


    Formula1Car *getCar(bool current);
};


#endif //BUTTERFINGERS_TEAMRESOURCES_H
