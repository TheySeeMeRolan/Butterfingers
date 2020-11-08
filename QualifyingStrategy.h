/**
 * @class QualifyingStrategy
 * @brief Concrete class.
 *
 * Concrete class serves as one of the ConcreteStrategy design pattern.
 * Implements the virtual functions for QualifyingStrategy.
 *
 * @author Janlu Pretorius u16014520
 *
 */

#ifndef PROJECT_QUALIFYINGSTRATEGY_H
#define PROJECT_QUALIFYINGSTRATEGY_H

#include "Strategy.h"

class QualifyingStrategy: public Strategy {
public:
    /**
     * @brief executes the various race strategise.
     * Pure virtual algorithm() of the Strategy design pattern.
     * Executes the Qualifying algorithm.
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
    virtual ~QualifyingStrategy();
};

#endif //PROJECT_QUALIFYINGSTRATEGY_H
