#include<iostream>
using namespace std;
template<typename t>  //template syntax this is normal for  functions 
t display(t a,t b){  // types of the data passed from the argument is t and return type also the templates
    return a+b;
}

int main()
{
    cout<<"The result of sum is "<<display(10,20)<<endl; 
}