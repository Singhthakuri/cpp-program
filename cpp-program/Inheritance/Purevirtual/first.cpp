// the methods in the base class have no implementation and keyword virtual is use and it is used in the child classes 

#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void calculateArea()=0;
};

class child1:public Parent{
    public:
    void calculateArea(){
        int l,b;
        cout<<"Enter length and breadth: ";
        cin>>l>>b;
        cout<<l*b;
    }
};

class child2:public Parent{
    public:
    void calculateArea(){
        int length;
        cout<<"Enter length of a square:";
        cin>>length;
        cout<<"area of square is: "<<length*length<<endl;
    }
};

int main()
{
    Parent *c2=new child2();
    Parent *c3=new child1();
    c3->calculateArea();
    c2->calculateArea();
}