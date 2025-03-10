#include<iostream>
using namespace std;
int *max(int *a,int *b)
{
    return a>b?a:b;
}

int main()
{
    int a,b;
    cout<<"enter num1:";
    cin>>a;
    cout<<"enter num2:";
    cin>>b;
    int *result=max(&a,&b);
    cout<<*result;
    return 0;
}