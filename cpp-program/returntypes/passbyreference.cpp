#include<iostream>
using namespace std;
int &minNum(int &x,int &y)
{
    return x<y? x: y;
}

int main()
{   int l,b;
    cout<<"Enter num1:";
    cin>>l;
    cout<<"Enter num2:";
    cin>>b;
    int& result=minNum(l,b);
    cout<<result<<endl;
    return 0;
}