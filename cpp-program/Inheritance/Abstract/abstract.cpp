// the base class that doesnot have and object create on them but they use pointer instead of object are called the abstract classes

#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void display()=0;
};

class Child:public Parent{
    public:
    void display() override{
        cout<<"Hello this is from the child class"<<endl;
    }
};

int main(){
    Parent *pt;
    Child x;
    pt=&x;
    pt->display();
}
