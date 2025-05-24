//crating a file 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{   ifstream myfile("newfile.txt");
    string line;   
    char ch;
    int count=0;
    if(myfile.is_open())
    {
       while(myfile.get(ch))
       {
        cout<<ch;
        count++;
       }    
       cout<<count;
    }
    return 0;
}