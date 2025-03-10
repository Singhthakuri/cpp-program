#include<iostream>
using namespace std;
void func(float x){
    cout<<x<<endl;
    cout<<"float function is calling me"<<endl;
    cout<<typeid(x).name();
}

void func(double x)
{
    cout<<typeid(x).name()<<endl;
    cout<<"This is double"<<x<<endl;
}

int main()
{
    func(3.13f);
    func(2.33);
    return 0;
}