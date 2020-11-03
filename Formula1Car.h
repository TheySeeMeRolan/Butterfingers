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
    Tyre* tyres[4];   //unsure if this is correct - for an array of pointers this is correct
    Chasis* chasis;
    Electronics* electronics;
    Spoiler* spoiler;
public:
    Formula1Car();//not necessary since it does nothing besides the default
    Formula1Car(Engine* engn, Tyre** trs, Chasis* chs, Electronics* elctr, Spoiler* splr); // defeats the purpose of the builder

    Engine* getEngine();
    Tyre** getTyre();//unsure if this is correct - for returning an array of pointers this is correct
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();

    void setEngine(Engine* engn);
    void setTyre(Tyre* trs[4]);//unsure if this is correct - for an array of pointers this is correct
    void setChasis(Chasis* chs);
    void setElectronics(Electronics* elctr);
    void setSpoiler(Spoiler* splr);
};

#endif //PROJECT_FORMULA1CAR_H
