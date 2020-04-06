#include "Rectangle.h"
#include "RegularShape.h"

Rectangle::Rectangle(int w, int h)
{
    setWidth(w);
    setHeight(h);
}

Rectangle::~Rectangle()
{
    //dtor
}

int Rectangle::getArea()
{
    return (width * height);
}
