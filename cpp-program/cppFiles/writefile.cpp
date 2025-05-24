#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        ofstream myfile("writefile.txt");
        if(myfile.is_open())
        {
            myfile<<"Hello this is first line"<<endl;
            myfile<<"Hello this is second line"<<endl;
            myfile<<"Hello this is third line"<<endl;
            myfile<<"Hello this is fourth line"<<endl;
            myfile.close();
            cout<<"file has been written";
        }
        else
        {
            cout<<"Something went while writing a file";
        }
        return 0;
}
