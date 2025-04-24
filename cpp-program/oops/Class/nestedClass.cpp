//lets learn how to create a nested class in cpp 

#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"i am calling from the parent class"<<endl;
    }
    class Child{
        public:
         void display(){
             cout<<"i am called from the child class"<<endl;
         }
    };
};

int main(){
    Parent s;
    s.show();
    Parent::Child t;
    t.display();
}