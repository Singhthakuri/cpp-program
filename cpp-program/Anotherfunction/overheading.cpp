#include<iostream>
using namespace std;
int sameFunc(int a, int b){
    return a+b;
}

float sameFunc(float x,float y)
{
    return x*y;
}

string sameFunc(string name){
   string res="hello mr" +name;
   return res;
}

int main()
{   float a=3.2,b=3.6;
   cout<<sameFunc(3,5)<<endl;
   cout<<sameFunc(3.4f,2.1f)<<endl;
   cout<<sameFunc("thakuri")<<endl;
    return 0;
}