/* 
 * File:   rectangle.h
 * Author: connie
 *
 * Created on May 14, 2015, 11:18 AM
 */

#ifndef RECTANGLE_H
#define	RECTANGLE_H

#include "figure.h"

class Rectangle:public Figure {
    
    public:
        Rectangle();
        void draw();
        void erase();
        
    private:
        int width;
        int length;
        int* centerPoint; 
            
};

#endif	/* RECTANGLE_H */

