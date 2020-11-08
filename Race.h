/**
 * @class Race
 * @brief Context participant
 *
 * The context participant of the Strategy design pattern.
 * Holds the handle to the Strategy that is used..
 * Manages its memory allocation and de-allocation internally with the destructor.
 *
 * @author Janlu Pretorius u16014520
 *
 */

#ifndef PROJECT_RACE_H
#define PROJECT_RACE_H

//member variable includes
#include "Equipment.h"
#include "Track.h"
#include "Log.h"

//includes for the strategy pattern
#include "Strategy.h"
#include "PracticeStrategy.h"
#include "QualifyingStrategy.h"
#include "RaceStrategy.h"

//general functionality includes
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Race{
private:
    vector<Team*> teams; ///< All the teams that participate in a race.
    vector<Equipment*> equipment; ///< The equipment of each respective team.
    vector<int> logStatement; ///< The point achieved by each team in each race.
    vector<vector<int>> tyreSets; ///< The set of tyres each team has, composed of a combination of soft, medium or hard tyres of up to 5 sets of tyres each.
    Log* log; ///< handle to the Log object which is responsible for keeping rack of the Race results.

    Strategy* strategy; ///< The pointer reference to a Strategy object.
    Track* track; ///< The pointer to the track of each race.

    string location; ///< The location of each race.
    int date; ///< The date of each race serves as a counter to change strategies(to different race days).
    bool european; ///< The indication if a race is European or not.

public:
    /**
     * @brief parameterized constructor.
     * Assigns the member variables.
     * @param t Track* of the track on which the race is run.
     * @param location string of the race location.
     * @param logIn Log* of where race results are stored.
     */
    Race(Track* t, string location,Log* logIn);

    /**
     * @brief destructor
     * Destructor ensures that all variables dynamically allocated,
     * within the race class is cleaned up upon destruction, specifically the strategy handle.
     */
    ~Race();

    /**
     * @brief updates to the applicable strategy
     * The update() method acts as a "switch" between the various strategies.
     * Switches the strategy based on the date.
     */
    void update();

    /**
     * @brief simulates the complete Race-weekend.
     * Acts as the redirection to the strategy "algorithm()" paricipant.
     */
    void race();

    /**
     * @brief returns the company with the best car.
     * @return a tuple with a string-the companyName with the best car and their cars stats.
     */
    tuple<string, int> getCompanyWithBestCar();

    /**
     * @brief access the points each team got for the race.
     * @return vector<int> points achieved by each team in the race.
     */
    vector<int> getLogStatement();

    /**
     * @brief see the location of a race.
     * Method that allows others to see the location of the race.
     * @return string of the location.
     */
    string getLocation();

    /**
     * @brief access the track a race is run on.
     * Method allows others to access the Track a race is run on.
     * @return Track* pointer to the track.
     */
    Track* getTrack();

    /**
     * @brief test if race is european.
     * The method determines if the track is in europe.
     * @return Boolean indicating european.
     */
    bool isEuropean();

    /**
     * @brief adds a Team to the race.
     * Once all the teams are added to the race the race will be run.
     * It calls the race() function.
     * @param t pointer to a Team.
     */
    void addTeam(Team* t);

    /**
     * @brief stores the equipment of each team
     * The equipment of each team needed by the race.
     * @param teamEquipment pointer to a the Equipment of a team.
     */
    void storeEquipment(Equipment* teamEquipment);

    /**
     * @brief stores the requested sets of tyres for each team.
     * The tyre sets of each team sent a month in advance is stored.
     * Consists of a number of soft, medium and hard tyres up to 5 in total.
     * Indicated by integers representing the number of each preferred tyre.
     * @param t vector of ints of the Teams tyre set.
     */
    void shipTyres(vector<int> t);

};

#endif //PROJECT_RACE_H
