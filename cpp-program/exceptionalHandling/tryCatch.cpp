#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    try
    {
        if(b==0 || c==0)
        {
            throw c,b;
        }
        cout<<a/(b+c);
    }
    catch(int b)
    {
        cout<<" b is throwing error";
    }
    return 0;
}