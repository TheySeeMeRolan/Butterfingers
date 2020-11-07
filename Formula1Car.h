/**
 * @class Formula1Car
 * @brief concrete class.
 * 
 * A concrete class that holds the different parts of the formula1 car built by the builders.
 * Implements getters and setters for the 5 parts -> engine, tyres, chasis, electronics and spoiler.
 *  
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_FORMULA1CAR_H
#define PROJECT_FORMULA1CAR_H

#include "Engine.h"
#include "Tyre.h"
#include "Chasis.h"
#include "Electronics.h"
#include "Spoiler.h"

class Formula1Car {
private:
    Engine* engine; ///< The engine part of the formula 1 car.
    Tyre* tyres;   ///< The tyres part of the formula 1 car.
    Chasis* chasis; ///< The chasis part of the formula 1 car.
    Electronics* electronics; ///< The electronics part of the formula 1 car.
    Spoiler* spoiler; ///< The spoiler part of the formula 1 car.
public:
    /**
     * @brief return engine part.
     * The implementation of the method that returns the engine part of the formula 1 car.
     * @return Engine* engine part.
    */
    Engine* getEngine();
    /**
     * @brief return tyres part.
     * The implementation of the method that returns the tyres part of the formula 1 car.
     * @return Tyre* tyre part.
    */
    Tyre* getTyres();
    /**
     * @brief return chasis part.
     * The implementation of the method that returns the chasis part of the formula 1 car.
     * @return Chasis* chasis part.
    */
    Chasis* getChasis();
    /**
     * @brief return electronics part.
     * The implementation of the method that returns the electronics part of the formula 1 car.
     * @return Electronics* electronic part.
    */
    Electronics* getElectronics();
    /**
     * @brief return spoiler part.
     * The implementation of the method that returns the spoiler part of the formula 1 car.
     * @return Spoiler* spoiler part.
    */
    Spoiler* getSpoiler();

    /**
     * @brief Set the engine of the formula 1 car.
     * The implementation of the method that sets the engine of the formula 1 car.
     * @param engine CarPart* which is upcasted to Engine*.
    */
    void setEngine(CarPart* engn);
    /**
     * @brief Set the tyres of the formula 1 car.
     * The implementation of the method that sets the tyres of the formula 1 car.
     * @param tyres CarPart* which is upcasted to Tyre*.
    */
    void setTyre(CarPart* trs);
    /**
     * @brief Set the chasis of the formula 1 car.
     * The implementation of the method that sets the chasis of the formula 1 car.
     * @param chasis CarPart* which is upcasted to Chasis*.
    */
    void setChasis(CarPart* chs);
    /**
     * @brief Set the electronics of the formula 1 car.
     * The implementation of the method that sets the electronics of the formula 1 car.
     * @param tyres CarPart* which is upcasted to Electronics*.
    */
    void setElectronics(CarPart* elctr);
    /**
     * @brief Set the spoiler of the formula 1 car.
     * The implementation of the method that sets the spoiler of the formula 1 car.
     * @param tyres CarPart* which is upcasted to Spoiler*.
    */
    void setSpoiler(CarPart* splr);
};

#endif //PROJECT_FORMULA1CAR_H
