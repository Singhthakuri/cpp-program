#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string address;
    Student(string name,string address){
        this->name=name;
        this->address=address;
    }
    void display(Student &s){
        cout<<s.name<<" "<<s.address<<endl;
    }
};

int main(){
    Student s("gajendra","Kailali");
    s.display(s);
}