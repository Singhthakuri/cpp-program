 // returning object cpp simple program
 #include<iostream>
 using namespace std;
 class Student{
    public:
    string name;
    int roll;
    int idNo;

    Student gen(string name,int roll,int id)
    {
        Student obj;
        obj.name=name;
        obj.idNo=id;
        obj.roll=roll;
        return obj;
    }

    void display(Student hi){
        cout<<"    -----------------------------display------------------------"<<endl;
        cout<<"I am ready for Displaying Datas:"<<endl;
        cout<<"Name is : "<<hi.name<<endl;
        cout<<"id is : "<<hi.idNo<<endl;
        cout<<"roll is : "<<hi.roll<<endl;
    }
 };

 int main()
 {
    Student hello,detail;
    hello=hello.gen("gajendra",3,4);
    detail=detail.gen("mahesh",10,2);
    hello.display(hello);
    hello.display(detail);
    return 0;
 }