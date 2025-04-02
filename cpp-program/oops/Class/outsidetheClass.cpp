// this is simple program to access private outside the class using member functions and methods 
#include<iostream>
#include<vector>
using namespace std;
class outside{
    int a;
    int b;
    public:
    void enter();
    void display();

};
void outside::enter(){
    cout<<"Enter first Number:";
    cin>>a;
    cout<<"Enter second Number:";
    cin>>b;
};

void outside::display(){
    cout<<"Sum of two numbers is :"<<a+b<<endl;
}

int main()
{
    outside s[3];
    vector<int>ans;
    for(auto st:s)
    {   
        st.enter();
        ans.push_back(100);
        st.display();
    }
    return 0;
}