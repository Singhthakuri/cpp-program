// simple program to find the polar co-ordinates of the rectangles 

#include<iostream>
#include<math.h>
using namespace std;
class Polar{
    public:
    float radious=0.0;
    float angle=0.0;
    void getdata()
    {
        cout<<"Enter radius: ";
        cin>>radious;
        cout<<"Enter angle: ";
        cin>>angle;
    }

};

class Rectangle{
    float xco=0.0;
    float yco=0.0;
    public:
    void calculate(Polar x)
    {
        x.getdata();
        xco=x.radious*cos(x.angle); 
        yco=x.radious*sin(x.angle);       
    }

    void display()
    {
        cout<<"x-cordinates is :  "<<xco<<" and y-coordinate is: "<<yco;
    }

};

int main()
{
    Polar p;
    Rectangle x;
    x.calculate(p);
    x.display();
}