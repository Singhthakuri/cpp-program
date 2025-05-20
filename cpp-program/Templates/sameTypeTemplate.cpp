#include<iostream>
using namespace std;
template<typename s>
class A{
    s num1;
    s num2;
    s num3;
    s num4;
    public:
    void getdata(s first,s second,s third,s fourth)
    {
        num1=first;
        num2=second;
        num3=third;
        num4=fourth;
    }
    void display(){
        cout<<"All the numbers are :"<<endl;
        cout<<"first no:"<<num1<<endl;
        cout<<"second no:"<<num2<<endl;
        cout<<"third no:"<<num3<<endl;
        cout<<"fourth no:"<<num4<<endl;
    }
};

int main()
{
    A<int> a;
    a.getdata(10,20,30,40);
    a.display();

}