//
//  Circle.cpp
//  001
//
//  Created by sxwt11 on 15-3-24.
//  Copyright (c) 2015年 sxwt11. All rights reserved.
//

#include "Circle.h"
Circle::Circle()
{
    _radius = 0.0;
    _xCenter = 0.0;
    _yCenter = 0.0;
}

float Circle::getRadius()
{
    return _radius;
}

float Circle::getCenterX()
{
    return _xCenter;
}

float Circle::getCenterY()
{
    return _yCenter;
}

void Circle::setCircle(float r,float x,float y)
{
    _radius = r;
    _xCenter = x;
    _yCenter = y;
}

float Circle::distance(Circle c1)
{
    return (sqrt((_xCenter-c1._xCenter)*(_xCenter-c1._xCenter)+(c1._yCenter-_yCenter)*(c1._yCenter-_yCenter)));
    
}