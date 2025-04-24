// static member is accessible to all the object not only specific
//its value must be declared outside the class
#include<iostream>
using namespace std;

class Static{
    private:
    static int count;
    public:
    Static(){
        cout<<count<<endl;
        count++;
    }

    void display(){
        cout<<"your count is: "<<count<<endl;
    }
};
int Static::count=0;
int main()
{
    Static s,t,u,v;
    v.display();
}