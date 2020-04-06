#ifndef CIRCLE_H
#define CIRCLE_H
#include "RegularShape.h"

using namespace std;

class Circle : public RegularShape
{
    public:
        Circle(int, int = 3.14);
        ~Circle();
        int getCircArea();
    protected:

    private:
};

#endif // CIRCLE_H
