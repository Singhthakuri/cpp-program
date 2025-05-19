//the actual implementation of try and catch is when any case arise that is exceptional then i will be thrown from the try block to the catch block
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