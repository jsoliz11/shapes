#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "RegularShape.h"

using namespace std;

class triangle : public RegularShape
{
    public:
        triangle(int, int);
        ~triangle();
        int getTArea();
    protected:

    private:
};

#endif // TRIANGLE_H
