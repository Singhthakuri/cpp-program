#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
         string data;
        fstream myfile("readwrite.txt" ,ios::in | ios::out);
        if(myfile.is_open())
        {
            while(getline(myfile,data))
            {
                cout<<data<<endl;
            }
            cout<<"Data has been readed successfully";
            myfile.clear();
            myfile.seekp(0,ios::end);

            myfile<<"this is new added Line "<<endl;
            myfile.close();
            cout<<"File has been read and write successfully";
        }else
        {
            cout<<"Something error occur while reading or writing file"<<endl;
        }
        return 0;
}   