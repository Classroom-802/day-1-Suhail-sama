#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Question 11: Function Overloading for Calculating Area
void calculateArea(double radius) {
    cout << "Circle Area: " << 3.14159 * radius * radius << endl;
}
void calculateArea(double length, double breadth) {
    cout << "Rectangle Area: " << length * breadth << endl;
}
void calculateArea(double base, double height, int triangle) {
    cout << "Triangle Area: " << 0.5 * base * height << endl;
}
