#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle():Figure(){
    
    length = 2; 
    width = 2;
    centerPoint = new int[2];
    centerPoint[0] = 1;
    centerPoint[1] = 2;
}

void Rectangle::draw(){
        cout << "Drawing from the rectangle class" << endl;
    }
    
void Rectangle::erase() {
        cout << "Erasing from the rectangle class" << endl;
    }
    
    
    

