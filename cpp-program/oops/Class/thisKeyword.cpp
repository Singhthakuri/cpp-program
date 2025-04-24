// we use this keyword if we have same name we use as argument or a parameter that is defined in member 

#include<iostream>
using namespace std;
class teacher{
    string name;
    string address;
    string hobby;
    public:
    teacher(string name="Gaju",string address="Dhangadhi",string hobby="soccer")  //use concept of default argument
    {
        this->name=name;
        this->address=address;
        this->hobby=hobby;
    }

    void display()
    {
        cout<<"He is "<<name<<endl;
        cout<<"He live in "<<address<<endl;
        cout<<"He loves " <<hobby<<endl;
    }

};
int main()
{
    teacher s("Gajendra","kailali","Football");
    s.display();
}