#include<iostream>
using namespace std;
int num(int *val){
    *val+=11;
    return *val;
}

int main()
{
    int x=4;
    cout<<num(&x)<<endl;
    cout<<x<<endl;
}