// lets create a friend class in cpp program 

// we create a friend class when we want to access the private data members of one class to the another class then we tell i am your friend and i can use your data according to my need 
// lets learn real life example taking as bank && costumer some cases
// directly we cannot access the private and protected members and methods to access we use friend

#include<iostream>
using namespace std;
class AccountHolder{
    string name="Mr. Gajendra Singh Thakuri";
     int balance=20000000;
        public:
        long accountNo=81022748372733847;
        void accountHoldershow(){
            cout<<name<<"is account Holder"<<endl;
        }
        friend class Detail;  //create a friend class
};

class Detail{
    long int mobileNo=9868584737;
    public:
    void fullDetail(AccountHolder s)
    {
        cout<<"Account holder: "<<s.name<<endl;
        cout<<"Account Number: "<<s.accountNo<<endl;
        cout<<"Account balance: "<<s.balance<<endl;
        cout<<"Mobile No: "<<mobileNo<<endl;

    }
};

int main()
{
    AccountHolder s;
    s.accountHoldershow();
    Detail t;
    t.fullDetail(s);
}