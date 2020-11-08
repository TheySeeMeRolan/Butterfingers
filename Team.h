 /**
 * @class Team
 * @brief Concrete Observer of the Observer pattern and one of the central classes in our system.
 *
 * Used to observe the WeeKCalender for the season and react accordingly to updates.
 * When an update is issued it sends the necessary commands to get its humans/staff to do the correct functions.
 * Holds a pointer to the start of a linked list (Resultant of the chain of responsibility) of humans.
 * Holds stats for the driver as well as *s to the testing facilities it may make use of .
 * Holds *'s to the human factories it uses during construction
 *
 * @author Rolan Strydom u16002513
*/
#ifndef PROJECT_TEAM_H
#define PROJECT_TEAM_H

#include "Observer.h"
#include "WeekCalender.h"
#include "Human.h"
#include "Command.h"
#include "HumanFactory.h"
#include "Command.h"
#include "PrepareCommand.h"
#include "RacingCommand.h"
#include "StrategiseCommand.h"
#include "ServiceCommand.h"
#include "ChangeTyreCommand.h"
#include "OrderTyresCommand.h"
#include "WindTestingCommand.h"
#include "SimulationTestingCommand.h"
#include "Driver.h"
#include "AerodynamicsFactory.h"
#include "ElectronicFactory.h"
#include "ChassisFactory.h"
#include "EngineFactory.h"
#include "TeamResources.h"
#include "Test.h"
#include "WindTunnel.h"
#include "Simulation.h"
#include "Hangar.h"
using namespace std;
class Team : public Observer
{

private:

    WeekCalender* calender;/// concrete observer pointer so that it can call getWeek()
    Human * lead;///leading pointer of the Human* list.
    Command* command[8];/// array of commands used by the team
    TeamResources* teamResources; ///Pointer to class of teamRecources type , which contains all the teams resources
    HumanFactory** factories;/// Array of pointers tp factory objects , used to create humans on creation
    int currentWeek;    /// variable used to save some of the state information from the concrete subject
    vector<int> driverStats; /// vector of ints , containing driver luck and skill
    Test * windTest; /// Pointer to the windTest facilities team may use to test adjustments to their cars
    Test * simulationTest;///Pointer to the simulation facilities team may use to test adjustments to their cars


public:
    /**
     * Constructor for team , takes a WeekCalender* , string and vector of Race*s as input
     * @param schedule WeekCalender* to save a pointer to the concrete subject so that getWeek() can be called when needed
     * @param name Name of the company that the team is racing for
     * @param sRaces vector<Race*> variable containing the scheduled races for the season.
     */
    Team(WeekCalender* schedule, string name,vector<Race*> sRaces);

    /**
     * Destructor used to delete all Human factories ,humans,commands tests and team resources
     */
    ~Team();
    /**
     * Called when notified by the subject that something has changed.
     * Gets the current week from the concrete subject (calender) .
     * Calls all commands to get Humans to do their jobs as needed.
     * Calls the prepare(),strategise(),orderTyres() commands.
     * When it is a non racing week, it calls the testWindTunnel() and testSimulation() commands.
     */
    virtual void update();
    /**
     * Calls execute() on the prepare command in the Commands array
     */
    void prepare();

    /**
     * Calls the race command in  the Commands array.
     */
    void race();
    /**
     *Calls execute() on the strategise command in  the Commands array.
     */
    void strategise();

    /**
     * Calls execute() on the WindTestCommand in the Command array , also executes the runWindTest() function
     */
    void testWindTunnel();
    /*
    * Calls execute() on the SimulationTestCommand in the Command array , also executes the runSimulationTest() function
    */
    void testSimulation();
    /**
     * Calls execute() on the ServiceCommand inb the Commands array
     */
    void service();

    /**
     * Calls execute() on the ChangeTyreCommand in the Commands array
     */
    void changeTyre();
    /**
     * Calls execute() on the OrderTyresCommand in the Commands array
     */
    void orderTyres();

    /**
     * Getter for teamResources
     * @return TeamResources* Returns the resources of the team (contains such elements such as teams car, racing schedule and company name).
     */
    TeamResources* getTeamResources();

    /**
     * Getter for teamResources
     * @return vector<int> Returns luck and skill stats of the teams driver.
     */
    vector<int> getDriver();

    /**
     * Calls test(p) on the simulationTest variable.
     * Send in the car to the test and have it return a car to replace the memento with
     * Send in future or current car
     * @param p The car on which you wish to do the testing.
     */
    void runSimulationTest(Formula1Car *p);

    /**
     * Calls test(p) on the windTest variable.
     * Send in the car to the test and have it return a car to replace the memento with
     * Send in future or current car
     * @param p The car on which you wish to do the testing.
     */
    void runWindTest(Formula1Car *p);
};


#endif //PROJECT_TEAM_H
