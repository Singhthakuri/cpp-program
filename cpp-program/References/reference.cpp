#include<iostream>
using namespace std;
int defaultvalue(int &x){
   x+=10;
   return x;
}

int main()
{
    int x=5;
    cout<<defaultvalue(x)<<endl;
    cout<<x<<endl;
}
