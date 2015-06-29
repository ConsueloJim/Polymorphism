#include "figure.h"
#include <iostream>

using namespace std;

Figure::Figure(){
    
}

void Figure::draw(){
    cout << "Drawing from the Figure class" << endl;
}

void Figure::erase(){
    cout << "Erasing from the Figure class" << endl;
}

void Figure::center(){
    cout << "Centering from the Figure class" << endl;
    erase();
    draw();
}



