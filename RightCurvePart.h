/**
 * @class RightCurvePart
 * @brief Concrete leaf class 
 * 
 * The concrete participant Leaf of composite design pattern. 
 * Implements virtual methods from TrackPart.
 * Serves as a single section of the track within the composite.
 * 
 * @author Luke Partridge u19010240
 */

#ifndef PROJECT_RIGHTCURVEPART_H
#define PROJECT_RIGHTCURVEPART_H

#include "TrackPart.h"

class RightCurvePart: public TrackPart{
public:
    /**
     * @brief parameterized constructor
     * The constructor that allows derived class members to be instantiated.
     * @param length int of part length
     * @param difficulty int of part difficulty
    */
    RightCurvePart(int l, int d);
    /**
     * @brief should only be called on Track participant
    */
    void addPart(TrackPart* part);
    /**
     * @brief should only be called on Track participant
    */
    bool isEuropean();    
    /**
     * @brief concrete destructor
     * the concrete destructor of leaf
    */
    ~RightCurvePart();
};

#endif //PROJECT_RIGHTCURVEPART_H
