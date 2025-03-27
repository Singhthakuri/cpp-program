#include<iostream>
using namespace std;
class Time{
    int mins;
    int hours;
    public:
  
    void gettime(){
        cout<<"Enter hours:";
        cin>>hours;
        cout<<"Enter minutes:";
        cin>>mins;
    }
    void display(){
        cout<<"Lets check final time result:"<<endl;
        cout<<"Hours is:"<<hours<<endl<<"minutes is :"<<mins<<endl;
    }

    void sum(Time s1,Time s2)
        {   
                hours=(s1.mins+s2.mins)/60;
                hours=hours+(s1.hours+s2.hours);
                mins=(s1.mins+s2.mins)%60;
        }
};

int main()
{
   Time f1,f2,f3;
   f1.gettime();
   f2.gettime();
    f3.sum(f1,f2);
    f3.display();
    return 0;
}