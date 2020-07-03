#pragma once 

#include "helper.hpp"

class Square; 

/**
 * this class is defined as a friend clas to 
 * square, which can be used to access the 
 * private variables of square object
 */
class accessSquareParameter {
public: 
    static double getEdge(Square& squareIn) {
        return squareIn.edgeLength; 
    }    
    static void setEdge(Square& squareIn, double edgeLengthIn) {    
        squareIn.edgeLength = edgeLengthIn; 
    }
}; 
 