#pragma once // makes sure this file is included once during compilation
#include <string>
using namespace std;

class Rectangle{
    private:
        float length;
        float width;

    public:
        Rectangle(); // constructor
        Rectangle (float NewLength, float NewWidth); // Added Overloaded Constructor
        ~Rectangle(); // Destructor

        void setLength(float newLength); // setter for length
        void setWidth(float newWidth); // setter for width
        
        float getLength(); // Getter for the Length
        float getWidth(); // Getter for the Width

        float calculateAreaOfRectangle(); // calculates and returns the area of the rectangle.
};