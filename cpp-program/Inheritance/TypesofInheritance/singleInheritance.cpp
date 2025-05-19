#include<iostream>
using namespace std;
class Parent{
    int x=10;
    public:
    void display()
    {
        cout<<x<<endl;
    }
};

class Child:public Parent{
    public:
    void childDisplay(){
        cout<<"i am child class";
    }
};

int main()
{
    Child x;
    x.display(); //call methods of parent
    x.childDisplay();//calls method of the child 
}