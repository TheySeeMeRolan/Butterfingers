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
    Engine* getEngine();
    Tyre* getTyres();
    Chasis* getChasis();
    Electronics* getElectronics();
    Spoiler* getSpoiler();

    void setEngine(CarPart* engn);
    void setTyre(CarPart* trs);
    void setChasis(CarPart* chs);
    void setElectronics(CarPart* elctr);
    void setSpoiler(CarPart* splr);
};

#endif //PROJECT_FORMULA1CAR_H
