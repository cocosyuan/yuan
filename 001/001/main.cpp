//
//  main.cpp
//  001
//
//  Created by sxwt11 on 15-3-24.
//  Copyright (c) 2015年 sxwt11. All rights reserved.
//

#include <iostream>
#include "Circle.h"
int main(int argc, const char * argv[])
{

    Circle c[3];
    c[1].setCircle(1.0, 0.0, 0.0);
    c[2].setCircle(1.0, 1.0, 1.0);
    c[3].setCircle(1.0, 0.0, 27.0);
    
    cout<<c[1].distance(c[2])<<endl;
    
    return 0;
}

