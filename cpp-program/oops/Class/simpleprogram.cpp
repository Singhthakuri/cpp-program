// Banking system using oops 
#include<iostream>
#include<string>
using namespace std;
class AccountHolder{
    private:
    string Balance;
    bool isSaving=false;
    float Interest=3.5;
    public:
    string accountHolder;
    string accountNumber;
    //account data constructor
    void AcountData(string Balance="1000"){
        this->Balance=Balance;
    };

    void addUser(){
        cout<<"Enter your name:"<<endl;
        cin>>this->accountHolder;
    }

    //balance updation
    void updateBalance(){
        cout<<"Enter the money you want to save"<<endl;
        cin>>this->Balance;
        cout<<"Balance added in your account";
    }

    void withDraw()
    {   string amount;
        cout<<"Enter amount to withdraw"<<endl;
        cin>>amount;
        int result=stoi(this->Balance);
        
    }

    void checkbalance(){

    }

};
int main()
{   
    AccountHolder ac;
    ac.withDraw();



    return 0;
}