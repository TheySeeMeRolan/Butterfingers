/**
* @class WeekCalender
* @brief It starts and progresses the season that we are in and is the concrete subject of the observer pattern
*
* This class cycles through all 45 weeks in our season
* It starts the season , progresses it by goToNextWeek and updates all teams registered to it.
*
* @author Rolan Strydom u16002513
*/
#ifndef BUTTERFINGERS_WEEKCALENDER_H
#define BUTTERFINGERS_WEEKCALENDER_H

#include "Subject.h"
#include <iomanip>
class WeekCalender : public Subject
{
private:
    int week;
    /// Contains the integer value of which week the season is currently in
public:

/**A basic constructor.
 * sets the week to -1 (used in logic to indicate season has not started yet)
 * Prints a simple construction message to aid in demo.
 */
WeekCalender();


/**
 * virtual function that returns the current week , used by observers when they are updated.
 */
virtual int getWeek();
/**
 *  function that increments the week of the season.
 *  Also calls the notify function after incrementing the week
 */
void goToNextWeek();
/**
 *  Starts the season.
 *  Runs a for loop of 45 iterations , each one calling goToNextWeek.
 *  Used to simulate the idea of weeks passing by and season going on.
 */
virtual void startSeason();
/**
 *  Virtual function that notifies
 *  Runs a for loop of 45 iterations , each one calling goToNextWeek.
 *  Used to simulate the idea of weeks passing by and season going on.
 */
};


#endif //BUTTERFINGERS_WEEKCALENDER_H
