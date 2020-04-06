#include <iostream>
#include "Circle.h"
#include "RegularShape.h"

using namespace std;

Circle::Circle(int r, int h)
:RegularShape(r, h)
{
    setWidth(r);
    setHeight(h);
}

Circle::~Circle()
{
    //dtor
}

int Circle::getCircArea()
{
    int d = width * width;
    int area = d * 3.14;
    cout << "Area of Circle: " << area << endl;
}
