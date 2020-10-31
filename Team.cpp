#include "Team.h"

Team::Team()
{
    /// Create the Human array using the factories
    factories = new HumanFactory*[4];
    factories[0] = new AerodynamicsFactory(this);
    factories[1] = new ElectronicFactory(this);
    factories[2] = new ChasisFactory(this);
    factories[3] = new EngineFactory(this);

    engineers[0] = factories[0]->makeEngineer();
    engineers[1] = factories[1]->makeEngineer();
    engineers[2] = factories[2]->makeEngineer();
    engineers[3] = factories[3]->makeEngineer();

    personnel[0] = factories[0]->makePersonnel(); 
    personnel[1] = factories[1]->makePersonnel(); 
    personnel[2] = factories[2]->makePersonnel(); 
    personnel[3] = factories[3]->makePersonnel(); 

    /// Create the commands ( to use the personnel )

    command[0] = new Prepare();
    command[1] = new Racing();
    command[2] = new Strategise();
    command[3] = new Testing();
}

void Team::prepare()
{
    
}

void Team::race()
{

}

void Team::strategise(){

}

void Team::test(){

}