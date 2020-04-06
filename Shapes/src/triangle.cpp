#include <iostream>
#include "triangle.h"
#include "RegularShape.h"

using namespace std;

triangle::triangle(int b, int h)
:RegularShape(b, h)
{
    setWidth(b);
    setHeight(h);
}

triangle::~triangle()
{
    //dtor
}

int triangle::getTArea()
{
    int stepOne = width * height;
    int area = stepOne / 2;
    cout << "Area of Triangle: " << area << endl;
}
