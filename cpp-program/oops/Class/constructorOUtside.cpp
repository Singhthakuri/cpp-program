#include<iostream>
using namespace std;
class Gajendra{
    public:
    Gajendra();
};
Gajendra::Gajendra(){
    {
        int n;
        cout<<"Enter any number:";
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
           sum+=i;
        
        }
        cout<<"Sum of the 100 numbers is:"<<sum;
    }
}
int main()
{
    Gajendra s;
}

// wap a program to print the sum of n natural numbers using constructors defauly constructor