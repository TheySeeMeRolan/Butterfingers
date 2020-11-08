/**
 * @class TrackPart
 * @brief Abstract interface class.
 * 
 * The abstract interface participant Component of composite design pattern. 
 * Holds pure virtual functions for Track.
 * As well as virtual functions for TrackPart.
 * 
 * @author Luke Partridge u19010240
 * 
 */

#ifndef PROJECT_TRACKPART_H
#define PROJECT_TRACKPART_H

#include <iostream>
#include <string>

using namespace std;

class TrackPart{
protected:
    int length; ///< The length of each track or trackSection.
    int difficulty; ///< The difficulty of each track or trackSection.
    string trackPartType; ///< The trackPartType of Composite track, Left Curve, Straight or Right Curve.
public:
    /**
     * @brief add leaf parts to composite.
     * The pure virtual method to allow the track {Composite} to add parts {Leafs}.
     * @param part pointer to a TrackPart. 
     */
    virtual void addPart(TrackPart* part)=0;
    /**
     * @brief test if track is european.
     * The pure virtual method to determine if the track is in europe.
     * @return Boolean indicating european.
     */
    virtual bool isEuropean()=0;

    /**
     * @brief return length of track.
     * The virtual method that returns the length of the track or of each leaf.
     * @return int of length.
     */
    virtual int getTotalLength();
    /**
     * @brief return difficulty of track.
     * The virtual method that returns the total difficulty of the track or of each leaf.
     * @return int of difficulty.
     */
    virtual int getTotalDifficulty();
    /**
     * @brief return type of track.
     * The virtual method that returns the trackPartType of Composite track, Left Curve, Straight or Right Curve.
     * @return string track part type
    */
    virtual string getTrackPartType();
    /**
     * @brief virtual destructor.
     * The virtual destructor that ensures the base class TrackPart is destroyed after the derived class.
    */
    virtual ~TrackPart();
    /**
     * @brief parameterized constructor.
     * The constructor that allows the base members to be instantiated.
     * @param length int of part length.
     * @param difficulty int of part difficulty.
     * @param type string of Composite track, Left Curve, Straight or Right Curve.
    */
    TrackPart(int l, int d, string t);
};

#endif //PROJECT_TRACKPART_H
