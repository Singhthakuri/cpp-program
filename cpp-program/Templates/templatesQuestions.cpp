simple template for generic data

 #include<iostream>
 using namespace std;
 template <typename s, typename t>
 void sum(s x,t y)
 {
    cout<<x+int(y);
 }

 int main()
 {
    sum(3,'h');
 }

multiples templates for different data types

#include<iostream>
using namespace std;
template<typename s,typename t,typename u,typename v>  // first int,second float,third char ,fourth string

void sum(s x,t y,u w,v z)
{
   cout<<x+y<<endl;
   cout<<w<<endl;
   cout<<z<<endl;

}
int main()
{
    sum(1,2.2,'h',"string");
}

templates class examples

#include <iostream>
using namespace std;
template <class t, class u, class v>
class Student
{
    t name;
    t address;
    u roll;
    u id;
    v marks;

public:
    void getdata()
    {
        getline(cin, name);
        getline(cin, address);
        cin >> roll;
        cin >> id;
        cin >> marks;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Address:" << address << endl;
        cout << "roll: " << roll << endl;
        cout << "id: " << id << endl;
        cout << "marks: " << marks << endl;
    }
};

int main()
{
    Student<string,int, float> s;
    s.getdata();
    s.display();
}