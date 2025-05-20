#include<iostream>
using namespace std;
class Parent{
    string name;
    int roll;
    public:
    Parent(string name,int roll){
        this->name=name;
        this->roll=roll;
    }

     void display(){
        cout<<name<<roll<<endl;
    }
};
class Child1{
     string name;
    int roll;
    public:
    Child1(string name,int roll){
        this->name=name;
        this->roll=roll;
    }

     virtual void display(){
        cout<<name<<roll<<endl;
    }
};

class Child2:public Child1, virtual public Parent{
     string name;
    int roll;
    public:
    Child2(string name,int roll,string name1,int roll1,string name2,int roll2):Child1(name1,roll1),Parent(name2,roll2){
        this->name=name;
        this->roll=roll;
    }

    void  display() override { 
        cout<<name<<roll<<endl;
    }
};

int main()
{
    Parent *pt=new Parent("Gaju",11);
    pt->display();
    Parent *p=new Child2("Gajendra",10,"Binod",14,"kapil",14);
    p->display();

    Child2 t("Gajendra",10,"Binod",14,"kapil",14);
    t.display();

    Child2 s("hello",1,"this",3,"hi",4);
    s.display();
    delete pt;
    delete p;


}