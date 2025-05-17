#include<iostream>
using namespace std;
class Parent{
        public:
        void eat(){
            cout<<"all animals needs food the survive"<<endl;
        }
     
};

class Left{
    public:
    void sayhi(){
        cout<<"Say hello to our user"<<endl;
    }
  
};

    class Main:public Parent,public Left{
        public:
        void result(){
            cout<<"I am final of multiple inheritance"<<endl;
        }
      
};


int main()
{
  Main x;
  x.eat();
  x.result();
  x.sayhi();
}