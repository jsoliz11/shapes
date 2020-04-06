#include <iostream>
#include "RegularShape.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    RegularShape rec(5, 10);
    cout << rec.getArea() << endl;
    cout << "----------------------" << endl;
    Circle circ(10);
    cout << circ.getCircArea() << endl;
    cout << "----------------------" << endl;
    triangle trig(5.2, 13);
    cout << trig.getTArea() << endl;
}
