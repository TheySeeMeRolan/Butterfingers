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
    Tyre** tyres;   //unsure if this is correct
    Chasis* chasis;
    Electronics* electronics;
    Spoiler* spoiler;
public:
    Formula1Car();
    Formula1Car(Engine* engn, Tyre** trs, Chasis* chs, Electronics* elctr, Spoiler* splr);
    Engine* getEngine();
    Tyre** getTyre();//unsure if this is correct
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();

    void setEngine(Engine*);
    void setTyre(Tyre**);//unsure if this is correct
    void setChasis(Chasis*);
    void setElectronics(Electronics*);
    void setSpoiler(Spoiler*);

};

#endif //PROJECT_FORMULA1CAR_H
