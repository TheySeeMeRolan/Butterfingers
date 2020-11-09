/**
 * @class TeamResources
 * @brief Originator of the memento design pattern
 * implements the createMemento and reinstantiateMemento methods.
 *
 * @author Rolan Strydom u16002613
 *
 **/
#ifndef BUTTERFINGERS_TEAMRESOURCES_H
#define BUTTERFINGERS_TEAMRESOURCES_H

// car builder
#include "vector"
#include "Formula1Car.h"
#include "EnginePartBuilder.h"
#include "TyrePartBuilder.h"
#include "ChassisPartBuilder.h"
#include "ElectronicsPartBuilder.h"
#include "SpoilerPartBuilder.h"

//Memento
#include "CarMemento.h"

// template
#include "Equipment.h"


#include<iostream>
#include<string>
#include<tuple>

class Race;

class TeamResources {
private:

   int currentWeek; /// Current week season it in
    vector <Race*> raceSchedule; /// Vector of all races occuring in the season
    Equipment* teamEquipment;///Equipment team needs to ship to race

    Formula1Car* currentCar; /// Car 1 used to race
    Formula1Car* currentCar2;/// Car 2 used to race

    Formula1Car* futureCar; ///Car to use in future seasons
    CarPartBuilder* carPartBuilder[5]; ///Array of carPartBuilders used to construct the cars
    int windTunnelTokens; ///Holds the number of tokens a team has left
    string company; ///Team's company's name
    vector<int> tyresToOrder;///vector of ints , indicating what tires to order (0 = soft) , ( 1 = medium) , (2 = hard)

public:
    /***
     * Helper function for Constructor , constructs all carPartBuilders and uses them to create the teams car
     */
    void construct();
    /**
     * Clones the teams current car 1
     * @return Formula1* The teams currentCar1 gets cloned and that clone gets returned
     */
    Formula1Car* cloneCar();
    /**
     * Constructor , calls construct() ,sets the company name and raceSchedule variables and sets up the tyresToOrder variable.
     * @param sRaces all races in the season
     * @param name Name of the team's company
     */
    TeamResources(string name,vector<Race*> sRaces);
    /**
     * returns the company name
     * @return string Name of the team's company
     */
    string getCompany();
    /**
     *Getter for cars engine
     *@return Engine* returns the current cars engine
     */
    Engine* getEngine();
    /**
     * Getter for cars tyres
     * @return Tyre* Returns current cars tyres
     */
    Tyre* getTyre();
    /**
     * Getter for cars chassis
     * @return Chassis* Returns current cars chassis
     */
    Chassis* getChassis();
    /**
     * Getter for cars electronics
     * @return Electronics* Returns current cars electronics
     */
    Electronics* getElectronics();
    /**
     * Getter for cars spoiler
     * @return Spoiler* Returns current cars spoiler
     */
    Spoiler* getSpoiler();
    /**
     * Setter so set the value of the currentWeek, used By Team so save the current week in season
     * @param cD week that currentWeek should be set to
     */
    void setCurrentWeek(int cD);
    /**
     * Getter for the current week
     * @return int Current week of season saved in TeamResources
     */
    int getCurrentWeek();

    /**
     * Destructor , used to destruct all the car part builders as well as cars
     */
    ~TeamResources();


    //getters for logistic

    /**
     * Getter of raceSchedule
     * @return vector<Race*> Returns all races schedules for the season
     */
    vector< Race *> getRaceSchedule();

    /**
     * Setter for raceSchedule , used to set new schedule incase new season wants  to be run with team
     * @param uR Schedule of the new races
     */
    void setRaceSchedule(vector<Race*> uR);

    /**
     *getter for teaMEquipment
     * @return Equipment*
     */
    Equipment* getTeamEquipment();

/**
 * Getter for FormulaOneCars
 * @param current True if you want to return current car , false if you wish to return future car
 * @return Formula1Car *
 */
    Formula1Car *getCar(bool current);
    /**
     * Getter for windTunnelTokens
     * @return int Number of tokens a team has left
     */
    int getWindTunnelTokens();

    /**
     * Setter forWindTunnelTokens , used when they deplete to set them to less
     */
    void setWindTunnelTokens(int);

    /**
     * Getter for tyre types that need to be ordered for the race coming in a month
     * @return vector<int>
     */
    vector<int> getTyresToOrder();

    /**
     * Setter for tyres that need to be ordered for the race coming in a month
     * @param t vector<int> That indicates which tyres to order
     */
    void setTyresToOrder(vector<int> t);

    /**
     * Returns the tyre parts builder so that it can be used to make tyres of ordered type
     * @return CarPartBuilder*
     */
    CarPartBuilder* getTyrePartBuilder();

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

    /**
     * Function to swap to future car at end of season and create two new current cars
     */
    void swapToFutureCarAndMakeNewCurrentCars();

};


#endif //BUTTERFINGERS_TEAMRESOURCES_H
