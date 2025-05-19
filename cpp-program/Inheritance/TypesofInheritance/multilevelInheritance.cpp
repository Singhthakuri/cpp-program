#include<iostream>
using namespace std;
class Animal{
    public:
   
    void eat(){
        cout<<"All animals need foods";
    }

    void breathe(){
        cout<<"Breathing is very important";
    }
};

class Dog:public Animal{
        string name;
        public:
        Dog(string name){ 
            this->name=name;
        }

        void dogname(){
            cout<<"i am "<<name<<endl;
        }
};
class Cat:public Dog{
        string name;
        public:
        Cat(string name,string name2):Dog(name2){
            this->name=name;
        }

        void catname(){
            cout<<"i am "<<name<<endl;
        }
};

int main()
{
    Cat c("Kitty","German");
    c.dogname();  //inherit dog class
    c.catname();    //cat own class
    c.breathe();    //inherit parent clasas
    c.eat();    // inherit parent class 
return 0;
}

