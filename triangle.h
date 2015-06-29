/* 
 * File:   triangle.h
 * Author: connie
 *
 * Created on May 14, 2015, 11:26 AM
 */

#ifndef TRIANGLE_H
#define	TRIANGLE_H

#include "figure.h"

class Triangle:public Figure {
    
    public:
        Triangle();
        void draw();
        void erase();
        
    public:
        int hieght;
        int base; 
        
              
};


#endif	/* TRIANGLE_H */

