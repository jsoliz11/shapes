#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "RegularShape.h"

using namespace std;

class Rectangle : public RegularShape
{
    public:
        Rectangle(int, int);
        ~Rectangle();
        int getArea();
    protected:

    private:
};

#endif // RECTANGLE_H

