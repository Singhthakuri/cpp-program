#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int phoneNo;
    public:
    void enter(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Your mobile No:";
        cin>>phoneNo;
    }
    void display()
    {
        cout<<"Hi i am:"<<" "<<name<<endl;
        cout<<"and i am:"<<" "<<age<<"years old"<<endl;
        cout<<"His contactNO is:"<<phoneNo<<endl;
    }
};

fint main(){
    student s[4];
    for(int i=0; i<4;i++)
    {
            s[i].enter();
            s[i].display();
    }

    cout<<"-----------------------------------Result----------------------------------------------"<<endl;

    for(int i=0;i<4;i++)
    {
        s[i].display();
    }
    return 0;
}