#include<iostream>
using namespace std;
int area(int l,int b)
{
    return l*b;
}
int main()
{
    int l,b;
    cout<<"Enter value of length :";
    cin>>l;
    cout<<"Enter value of breadth:";
    cin>>b;
    int are=area(l,b);
    cout<<"Area of reactangle is :"<<are;
    return 0;
}
