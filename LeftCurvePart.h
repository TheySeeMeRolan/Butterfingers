/**
 * @class LeftCurvePart
 * @brief Concrete leaf class.
 * 
 * The concrete participant Leaf of composite design pattern. 
 * Implements virtual methods from TrackPart.
 * Serves as a single section of the track within the composite.
 * 
 * @author Luke Partridge u19010240
 */

#ifndef PROJECT_LEFTCURVEPART_H
#define PROJECT_LEFTCURVEPART_H

#include "TrackPart.h"

class LeftCurvePart: public TrackPart{
public:
    /**
     * @brief parameterized constructor.
     * The constructor that allows derived class members to be instantiated.
     * @param length int of part length.
     * @param difficulty int of part difficulty.
    */
    LeftCurvePart(int l, int d);
    /**
     * @brief should only be called on Track participant.
    */
    void addPart(TrackPart* part);
    /**
     * @brief should only be called on Track participant.
    */
    bool isEuropean();
    /**
     * @brief destructor.
     * the concrete destructor of leaf that ensures the derived class is deleted before the base class trackPart.
    */
    ~LeftCurvePart();
};

#endif //PROJECT_LEFTCURVEPART_H
