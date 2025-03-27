// we can use private methods and the members in the derived or same class but no in outside environment 
#include<iostream>
using namespace std;
class Simple{
    protected:
    int length;
    int breadth;
    void enter(){
        cin>>length;
        cin>>breadth;
    }

};

class child:public Simple{
    public:
    
    void display(){
       
        enter();
        cout<<length<<endl;
        cout<<breadth<<endl;
    }

};

int main()
{ 
    child *a =new child;
    a->display();
    return 0;
}