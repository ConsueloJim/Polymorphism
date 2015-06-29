#include "triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle():Figure() {
    hieght = 2;
    base = 2;
    
}

void Triangle::draw() {
    cout << "Drawing from the triangle class" << endl;
}

void Triangle::erase() {
    cout << "Erasing from the triangle class" << endl;
}
