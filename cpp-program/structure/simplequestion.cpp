#include<iostream>
using namespace std;
struct students{
    string name;
    int roll;
    int age;
};

int  main()
{
    struct students s[3];
    for(int i=0;i<=3;i++)
    {
        cin>>s[i].name>>s[i].roll>>s[i].age;

    }
    for(int i=0;i<=3;i++)
    {
        cout<<s[i].name<<s[i].roll<<s[i].age;
    }
    return 0;
}