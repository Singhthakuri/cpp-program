#include<iostream>
using namespace std;
struct first{
    int a,b;
    void enter(){
        cin>>a>>b;
    }
    int sum(){
        return a+b;
    }
    void display(){
        cout<<sum();
    }
};
int main(){
    struct first s;
    s.enter();
    s.display();
}