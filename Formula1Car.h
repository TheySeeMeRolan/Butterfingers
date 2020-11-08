/**
 * @class Formula1Car
 * @brief State of the memento. Accessors and mutators are used to help with thememento design patterns's ariginator(TeamResources)
 * @author Joanita Nell
 * **/

#ifndef PROJECT_FORMULA1CAR_H
#define PROJECT_FORMULA1CAR_H

#include "Engine.h"
#include "Tyre.h"
#include "Chasis.h"
#include "Electronics.h"
#include "Spoiler.h"

class Formula1Car {
private:
    Engine* engine;
    Tyre* tyres;   
    Electronics* electronics;
    Spoiler* spoiler;
    Chasis* chasis;
public:
/**
 * @brief accessor for the engine attribute, used by memento's originator.
 * **/
    Engine* getEngine();
/**
 * @brief accessor for the tyres attribute, used by memento's originator.
 * **/
    Tyre* getTyres();
/**
 * @brief accessor for the chasis attribute, used by memento's originator.
 * **/
    Chasis* getChasis();
/**
 * @brief accessor for the electronics attribute, used by memento's originator.
 * **/
    Electronics* getElectronics();
/**
 * @brief accessor for the spoiler attribute, used by memento's originator.
 * **/
    Spoiler* getSpoiler();

/**
 * @brief mutator for the engine attribute. 
 * @param engn the engine attribute is set to engn
 * **/
    void setEngine(CarPart* engn);
/**
 * @brief mutator for the tyres attribute. 
 * @param trs the tyres attribute is set to trs
 * **/
    void setTyre(CarPart* trs);
/**
 * @brief mutator for the chasis attribute. 
 * @param chs the engine attribute is set to chs
 * **/
    void setChasis(CarPart* chs);
/**
 * @brief mutator for the electronics attribute. 
 * @param elctr the electronics attribute is set to elctr
 * **/
    void setElectronics(CarPart* elctr);
/**
 * @brief mutator for the spoiler attribute. 
 * @param splr the spoiler attribute is set to splr
 * **/
    void setSpoiler(CarPart* splr);
};

#endif //PROJECT_FORMULA1CAR_H
