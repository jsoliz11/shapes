#include "RegularShape.h"
#include <iostream>

using namespace std;

RegularShape::RegularShape(int w, int h)
{
    setWidth(w);
    setHeight(h);
}

RegularShape::~RegularShape()
{
    //dtor
}

void RegularShape::setWidth(int w)
{
    width = w;
}

void RegularShape::setHeight(int h)
{
    height = h;
}

int RegularShape::getArea()
{
    int a = width * height;
    cout << "Area of Rectangle is: " << a << endl;
}

