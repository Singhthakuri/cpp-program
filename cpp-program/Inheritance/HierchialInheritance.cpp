#include<iostream>
using namespace std;
class Parent{
    public:
    void speak(){
        cout<<"Parent is speaking"<<endl;
    }
};

class child:public Parent{
    public:
    void walk(){
        cout<<"i can walk "<<endl;
    }
};

class child2:public Parent{
    public:
    void swim(){
        cout<<"i can swim"<<endl;
    }
};

int main()
{
    child x; //object of child 1
    child2 y; //object of child2
    x.speak(); //inherit parent by child 1
    x.walk();   //calls its own method or function 

    y.speak(); //child2 inherit parent
    y.swim();   //child2 calls its own methods or functions
    return 0;
}
