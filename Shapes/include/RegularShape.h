#ifndef REGULARSHAPE_H
#define REGULARSHAPE_H

using namespace std;

class RegularShape
{
    public:
        RegularShape(int, int);
        ~RegularShape();
        void setWidth(int);
        void setHeight(int);
        int getArea();
    protected:
        int width;
        int height;
    private:

};

#endif // REGULARSHAPE_H
