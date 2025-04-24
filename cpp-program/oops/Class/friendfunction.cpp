// this is used to access private and public data member of the function and doesnot need scope resolution (::)
#include<iostream>
using namespace std;
class Teacher{
    string name="Gajendra Singh"; // this is private data member
    public:
    friend void display(Teacher);  //friend function
};
void display(Teacher s)
{
    cout<<s.name;  // displaying the private member of class Teacher
}

int main(){
    Teacher s;  //object of teacher
    display(s); //calling display and sending object as an argument
}