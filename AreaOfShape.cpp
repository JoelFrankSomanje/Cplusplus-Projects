#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Function that calculates the area of a square
double squareArea(double side) {
    return side * side;
}

// Function that calculates the area of a rectangle
double rectangleArea(double length, double width) {
    return length * width;
}

// Function that calculates the area of a triangle
double triangleArea(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Entry of the sides of the triangle." << endl;
        return -1;
    }
    else {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

}
int main() {
    int Choice;
    do {
        cout << "\nPlease select the area of the shape to calculate" << endl;
        cout << "\n1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "\nEnter your choice: ";

        cin >> Choice;

        /*if (cin.fail()) {
            cout << "Invalid input. Please enter a valid input." << endl;
            // Clears the error flags and ignores the rest of the line.
            cin.clear();
            // Discards invalid input from the graph.
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }*/

        switch (Choice) {
            case 1: {
                double side;
                cout << "Enter the side length of a square: ";
                cin >> side;

                if (side <= 0) {
                    cout << "Invalid input. Please enter a positive number for the side length." << endl;
                }
                else {
                    cout << "Area of the Square is " << squareArea(side) << endl;
                }
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of a rectangle: ";
                cin >> length;
                cout << "Enter the width of a rectangle: ";
                cin >> width;

                if (length <= 0 || width <= 0) {
                    cout << "Invalid input. Please enter positive numbers for the length and width." << endl;
                }
                else {
                    cout << "Area of the rectangle is " << rectangleArea(length, width) << endl;
                }
                break;
            }
            case 3: {
                double a, b, c;
                cout << "Enter the first length of the triangle: ";
                cin >> a;
                cout << "Enter the second length of the triangle: ";
                cin >> b;
                cout << "Enter the third length of the triangle: ";
                cin >> c;

                if(a <= 0 || b <= 0 || c <= 0) {
                    cout << "Invalid input. Please enter positive numbers for the side lengths, a, b and c: ";
                }
                else {
                    double area = triangleArea(a, b, c);
                    if (area != -1) {
                        cout << "Area of the triangle is " << area << endl;
                    }
                    
                }
                break;
            }
            case 4: {
                cout << "Exiting Program" << endl;
                break;
            }
            default: {
                cout << "Your input was "<< Choice << " which is an invalid input." << endl;
                cout << "Please enter a valid input!!!" << endl;
            }
        }
    }while (Choice != 4);

    return 0;
}