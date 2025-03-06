#include<iostream>
using namespace std;
int defaultCheck(int a,int b=4)
{
    return a*b;
    return a+b;
    return a-b;
    return a/b;
}

int  main()
{
    cout<<defaultCheck(2);
    return 0;
}