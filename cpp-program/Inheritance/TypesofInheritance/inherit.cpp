//inheritance concepts 
#include<iostream>
using namespace std;
class Parent{
    public:
    void sayHi(){
        cout<<"Hello Sir From Parent class";
    }
};
class Child:public  Parent{
    public:
    void saychild(){
        cout<<"Hello sir from child 1";
    }
};

class Child2:public Child{
    public:
    void sayHello(){
        cout<<"hello sir from 2nd child";
    }
};

int main()
{
    Child2 s;
    s.sayHi();
    s.saychild();
    s.sayHello();
    return 0;
}