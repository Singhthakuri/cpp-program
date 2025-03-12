#include<iostream>
using namespace std;
int area( int l,int b){
    return l*b;
}
int area(int l){
    return (l*l);
}
int main()
{
    int l,b;
    cout<<"Enter length and breadth";
    cin>>l>>b;
    int square=area(l);
    int rectangle=area(l,b);
    cout<<"Area is rectangle :"<<rectangle<<endl;
    cout<<"Area of square:"<<square<<endl;
    return 0;
}