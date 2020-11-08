/**
 * @class RaceStrategy
 * @brief Concrete class.
 *
 * Concrete class serves as one of the ConcreteStrategy design pattern.
 * Implements the virtual functions for RaceStrategy.
 *
 * @author Janlu Pretorius u16014520
 *
 */

#ifndef PROJECT_RACESTRATEGY_H
#define PROJECT_RACESTRATEGY_H

#include "Strategy.h"

class RaceStrategy: public Strategy{
public:
    /**
     * @brief executes the various race strategies.
     * Pure virtual algorithm() of the Strategy design pattern.
     * Executes the actual race day algorithm.
     * @param team vector of all the teams participating in the race.
     * @param track pointer to the Track the race is being run on.
     * @return vector of teams in the potion they placed.
     */
    virtual vector<Team*> race(vector<Team*> teams, Track* track, vector<vector<int>>);

    /**
     * @brief Helper function to determine each teams score per kilometer of race run.
     * @return integer of the score a team achieved in a kilometer.
     */
    virtual int determineTeamRaceScore(Team*, int, int);

    /**
     * @brief virtual destructor
     * Ensures that the base class Strategy is destroyed after the derived classes.
     */
    virtual ~RaceStrategy();
};


#endif //PROJECT_RACESTRATEGY_H
