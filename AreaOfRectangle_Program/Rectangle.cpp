#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

Rectangle::Rectangle(float NewLength, float NewWidth){ // Added Overloaded Constructor
    length = NewLength;
    width = NewWidth;
}

Rectangle::~Rectangle() { // Destructor which does nothing for now

}

void Rectangle::setLength(float newLength){
    length = newLength;
}

void Rectangle::setWidth(float newWidth){
    width = newWidth;
}

float Rectangle::getLength(){
    return length;
}

float Rectangle::getWidth(){
    return width;
}

float Rectangle::calculateAreaOfRectangle() {
    return length * width;
}