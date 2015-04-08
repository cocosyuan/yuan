//
//  Circle.h
//  001
//
//  Created by sxwt11 on 15-3-24.
//  Copyright (c) 2015年 sxwt11. All rights reserved.
//

#ifndef ___01__Circle__
#define ___01__Circle__

#include <iostream>
#include <Math.h>
using namespace std;
class Circle
{
public:
    Circle();
    float getRadius();
    float getCenterX();
    float getCenterY();
    void setCircle(float r,float x,float y);
    float distance(Circle c1);
private:
    float _radius;
    float _xCenter;
    float _yCenter;
        
};

#endif /* defined(___01__Circle__) */
