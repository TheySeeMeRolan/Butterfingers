/**
 * @class Formula1Car
 * @brief concrete class.
 * 
 * A concrete class that holds the different parts of the formula1 car built by the builders.
 * Implements getters and setters for the 5 parts -> engine, tyres, chasis, electronics and spoiler.
 * State of the memento. Accessors and mutators are used to help with the memento design patterns's originator(TeamResources)
 *  
 * @author Luke Partridge u19010240
 * @author Joanita Nell

 */

#ifndef PROJECT_FORMULA1CAR_H
#define PROJECT_FORMULA1CAR_H

#include "Engine.h"
#include "Tyre.h"
#include "Chassis.h"
#include "Electronics.h"
#include "Spoiler.h"

class Formula1Car {
private:
    Engine* engine; ///< The engine part of the formula 1 car.
    Tyre* tyres;   ///< The tyres part of the formula 1 car.
    Chassis* chasis; ///< The chasis part of the formula 1 car.
    Electronics* electronics; ///< The electronics part of the formula 1 car.
    Spoiler* spoiler; ///< The spoiler part of the formula 1 car.
public:
    /**
     * @brief return engine part.
     * The implementation of the method that returns the engine part of the formula 1 car.
     * used by memento's originator.
     * @return Engine* engine part.
    */
    Engine* getEngine();
    /**
     * @brief return tyres part.
     * The implementation of the method that returns the tyres part of the formula 1 car.
     * Used by memento's originator.
     * @return Tyre* tyre part.
    */
    Tyre* getTyres();
    /**
     * @brief return chasis part.
     * The implementation of the method that returns the chasis part of the formula 1 car.
     * Used by memento's originator.
     * @return Chassis* chasis part.
    */
    Chassis* getChasis();
    /**
     * @brief return electronics part.
     * The implementation of the method that returns the electronics part of the formula 1 car.
     * Used by memento's originator.
     * @return Electronics* electronic part.
    */
    Electronics* getElectronics();
    /**
     * @brief return spoiler part.
     * The implementation of the method that returns the spoiler part of the formula 1 car.
     * Used by memento's originator.
     * @return Spoiler* spoiler part.
    */
    Spoiler* getSpoiler();

    /**
     * @brief Set the engine of the formula 1 car.
     * The implementation of the method that sets the engine of the formula 1 car.
     * @param engn CarPart* which is upcasted to Engine*.
    */
    void setEngine(CarPart* engn);
    /**
     * @brief Set the tyres of the formula 1 car.
     * The implementation of the method that sets the tyres of the formula 1 car.
     * @param trs CarPart* which is upcasted to Tyre*.
    */
    void setTyre(CarPart* trs);
    /**
     * @brief Set the chasis of the formula 1 car.
     * The implementation of the method that sets the chasis of the formula 1 car.
     * @param chs CarPart* which is upcasted to Chassis*.
    */
    void setChasis(CarPart* chs);
    /**
     * @brief Set the electronics of the formula 1 car.
     * The implementation of the method that sets the electronics of the formula 1 car.
     * @param elctr CarPart* which is upcasted to Electronics*.
    */
    void setElectronics(CarPart* elctr);
    /**
     * @brief Set the spoiler of the formula 1 car.
     * The implementation of the method that sets the spoiler of the formula 1 car.
     * @param splr CarPart* which is upcasted to Spoiler*.
    */
    void setSpoiler(CarPart* splr);
    /**
 * Destructor
 */
    ~Formula1Car();
};

#endif //PROJECT_FORMULA1CAR_H
