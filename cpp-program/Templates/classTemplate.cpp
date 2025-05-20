// tempates with the class 
#include<iostream>
using namespace std;
template<typename s,typename t,typename u,typename v> //s string t int u boolean v float
class A{
    s name;
    t roll;
    u istrue;
    v marks;
    public:
    A(s name,t roll,u istrue,v marks):name(name),roll(roll),istrue(istrue),marks(marks){}
    void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"roll: "<<roll<<endl;
            cout<<"isStudent: "<<istrue<<endl;
            cout<<"marks: "<<marks<<endl;

    }
};

int main()
{
    A<string,int,bool,float> s("Gajendra",45,true,45.56);
    s.display();

}