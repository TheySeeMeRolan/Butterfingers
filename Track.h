/**
 * @class Track
 * @brief Concrete composite class.
 * 
 * The concrete participant Composite of composite design pattern. 
 * Implements virtual methods from TrackPart.
 * Holds leafs of track sections which form the entire track.
 * 
 * @author Luke Partridge u19010240
 */

#ifndef PROJECT_TRACK_H
#define PROJECT_TRACK_H

#include "TrackPart.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Track: public TrackPart{
private:
    vector<TrackPart*> sections; ///< Vector of leafs that make up the track.
    bool european; ///< boolean to indicate if the track is in Europe.
public:
    /**
     * @brief add leaf parts to vector.
     * The implementation of the method to add parts {Leafs} in to the sections vector.
     * @param part pointer to a TrackPart.
     */
    void addPart(TrackPart* part);
    /**
     * @brief return difficulty of track.
     * The implementation of the method that returns the total difficulty of the track. It will sum the difficulties of the trackPart leafs in the sections vector.
     * @return int of difficulty.
     */
    int getTotalDifficulty();
    /**
     * @brief return difficulty of track. 
     * The implementation of the method that returns the total length of the track. It will sum the lengths of the trackPart leafs in the sections vector.
     * @return int of difficulty.
     */
    int getTotalLength();
    /**
     * @brief test if track is european.
     * The implementation of the method to determine if the track is in Europe.
     * @return Boolean indicating European.
     */
    bool isEuropean();
    /**
     * @brief return type of track.
     * The implementation of the method that returns the trackPartType of Composite track.
     * @return string track part type.
    */    
    string getTrackPartType();
    /**
     * @brief parameterized constructor.
     * The constructor that allows derived class members to be instantiated.
     * @param isEuropean Boolean indicating if the track should be European.
    */
    Track(bool isEuropean);
    /**
     * @brief destructor. 
     * The concrete destructor that ensures the vector of anonymous leafs are destroyed.
    */
    ~Track();
};

#endif //PROJECT_TRACK_H
