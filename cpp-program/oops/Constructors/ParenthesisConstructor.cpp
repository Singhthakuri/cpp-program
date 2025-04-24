#include<iostream>
using namespace std;
//class declaration
class Student{
    public:  //make it public for data members methods and constructors 
    string name;
    int roll;
    Student(string name,int roll){
        this->name=name;
        this->roll=roll;
    }
    // displaying normal function
    void display(){
        cout<<name<<endl<<roll;
    }
};

int main()
{   
    Student s("Gajendra",10);  //constructor initiated
    s.display(); // display method called 
    return 0;
}