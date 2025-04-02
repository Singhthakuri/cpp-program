#include<iostream>
using namespace std;
class Animal{
    public:
           virtual void display(){
        cout<<"hi i am animal parent class";
    }

    void output(){
        cout<<"animal is calling";
        
    }

};

class dog:public Animal{
    public:
    void display (){
        cout<<"I am callling the same of the criteria dog class";
    }
     void output(){
        cout<<"chid is calling";
     }
};


int main(){
    Animal* a=new dog();
    dog* b=(dog*)new Animal();
b->display();
    a->display();    
   return 0;
}
