#include<iostream>
using namespace std;
int defaultvalues(int x)
{
    x+=5;
    return x;
}

int main()
{
        int x=4;
    cout<<defaultvalues(x)<<endl;
    cout<<x;
}