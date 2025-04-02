 #include<iostream>
 using namespace std;
 class inherit{
    private:
    string name;
    string address;
    public:
    int grade;
    inherit(string name,string address,int grade){
        this->name=name;
        this->address=address;
        this->grade=grade;
    }

    void display(){
        cout<<address<<" "<<grade<<" "<<name<<" "<<endl;
    }

 };
 class b{
    public:
    void call(){
        cout<<"why someOne call me"<<endl;
    };
 };

 class c{
    public:
    void disp(){
        cout<<"I am at group c";
    }
 };

 class D:public b,public c{
        public:
        void res(){
            cout<<"I am over the top ";
        }
 };

 int main(){
    inherit * a=new inherit("gajendra","kmc",34);
    a->display();
    inherit s("gajendra","kailali",4);
    s.display();
     D s;
    s.disp();     

 }
