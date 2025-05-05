//Qn 1 to calculate the tax using default paremeter if not tat is given 

#include<iostream>
using namespace std;
float calculateTax(double income,double taxRate=0.2)
{   
    return (taxRate)/100*income;
}
int main()
{
    double income;
    double tax=0.2;
    cout<<"Enter your Income: ";
    cin>>income;
    char choice;
    cout<<"Do you want to enter specific taxRate (y/n) ?";
    cin>>choice;
    if(choice == 'Y' || choice =='y')
    {
        cout<<"Enter  taxRate:";
        cin>>tax;
    }
    cout<<"You have to pay"<<" "<<calculateTax(income,tax)<<" as a tax"<<endl;
    return 0;
}

//Q.2 three overloaded multiply functions 

#include<iostream>
using namespace std;
int multiply(int x,int y) {return x*y;}
float multiply(float x,float y){return x*y;}
float multiply(int x,float y){return x*y;}

int main()
{
    float a,b;
    int x,y;
    cout<<"Enter value of a float ";
    cin>>a;
    cout<<"Enter value of b float ";
    cin>>b;
    cout<<"Enter value of x ";
    cin>>x;
    cout<<"Enter value of y ";
    cin>>y;
    cout<<multiply(x,y)<<" int x,y multiply"<<endl;
    cout<<multiply(a,b)<<" int a,b multiply"<<endl;
    cout<<multiply(x,b)<<" int x,b multiply"<<endl;

}

//Q.3 overload greet function 
#include<iostream>
using namespace std;
void greet(){
    cout<<"Helo Sir"<<endl;
}
void greet(string name){
    cout<<"hello "<<name<<endl;
}
void greet(string name,int age)
{
    cout<<"Hello "<<name<< " i am "<<age<<" years old."<<endl;
}

int main()
{
    string name;
    cout<<"Entr your Name: "<<endl;
    getline(cin,name);
    int age;
    cout<<"Enter your age:";
    cin>>age;
    //calling without arguments
    greet();;
    //with name as argument
    greet(name);
    //with name and age as arguments
    greet(name ,age);
    return 0;
}


//Qn.4 overloading of the function
#include<iostream>
using namespace std;
void maxValue(int x,int y){
    x>y?cout<<"x is maximum value"<<endl:cout<<"y is Maximum value"<<endl;
}
void maxValue(int x,int y,int z)
{
    if(x>y && y>z)
    {cout<<"x is greatest"<<endl;}
    else if(z<y)
    {
    cout<<"y is greatest"<<endl;
    }else
    cout<<"z is greatest"<<endl;
}
void maxValue(float a,float b){
    a>b?cout<<"a is maximum":cout<<"b is maximum"<<endl;
}

int main(){
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter value of c:";
    cin>>c;
    float x,y;
    cout<<"floating value of x:";
    cin>>x;
    cout<<"floating value of y:";
    cin>>y;
    maxValue(a,b); // with two 
    maxValue(a,b,c);//with three
    maxValue(x,y); //with four
    return 0;
}

//Q.5 //cube of the function
#include<iostream>
using namespace std;
inline void cube(int x){
    cout<<"cube is "<<x*x*x;
} 
int main(){
    int x,y,z;
    cout<<"Enter value of to find cube: ";
    cin>>x;
    cube(x);
    
    cout<<"Enter value of to find cube: ";
    cin>>y;
    cube(y);
    cout<<"Enter value of to find cube: ";
    cin>>z;
    cube(z);
    return 0;
}   

//Q.6 // to demonestrate the passing value doesnot change the orginal value of the variables

#include<iostream>
using namespace std;
void passbyValue(int x){
    cout<<"x before increament:"<<x<<endl;
    x+=1;
    cout<<"x after  increament:"<<x<<endl;
}
int main()
{
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    passbyValue(x);
    cout<<"Orginal Value of x is: "<<x;  //10  doesnot affect on the orginal value only copy get increased
    return 0;
}

//Q.7 // to swap two value which leads to change the orignal value of varibale passybyreference

#include<iostream>
using namespace std;
void passbyRef(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    passbyRef(a,b);
    cout<<"After the swapping the content of a and b "<<endl;
    cout<<" Orginal value of a is "<<a<<endl;
    cout<<" Orginal value of b is "<<b<<endl; 
    return 0;
}

//Q.8 to multiyply by 2 using pointer 

#include<iostream>
using namespace std;
void multiply(int *x){
    *x=*x*2;
    cout<<*x <<"  is multuplied value"<<endl;
}
int main(){
    int x;
    cout<<"Enter value of x:";
    cin>>x;
    multiply(&x);
    cout<<"orginal value of x: "<<x;
    
}

Q.9 to sum of the multiple progras

#include<iostream>
using namespace std;
int sum(int x,int y){return x*y;}

void multiplesSUm(int x,int y){
     cout<<sum(x,y);
}

int main()
{
    int x,y;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    multiplesSUm(x,y);
}

//Q.10 program getlargest by using references or address

#include<iostream>
using  namespace std;
int &getlargetst(int &a,int &b)
{
    return a>b?a:b;
}

int main()
{
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<getlargetst(a,b)<<" is greatest"<<endl;
    //if i want to change tha largest to smallest then here suppose a=10,b=20 above case b is greatest
    getlargetst(a,b)=5; //this is the address of the b
    cout<<getlargetst(a,b);
    return 0;
}

//Q.11 dynamic memroy allocation and deallocation 

#include<iostream>
using namespace std;
int* allocateArray(int size)
{
    int* arr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    return arr;
}

int main()
{
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    int *arr=allocateArray(size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i] <<" ";
    }
    delete[] arr; 
    
}

//Q.12 concatinate as a string for nums integers,strings

#include<iostream>
#include<string>
using namespace std;
void concatenate(string s1,string s2)
{
    cout<<s1+s2<<endl;
}

void concatenate(int num1,int num2)
{
    cout<<to_string(num1) +to_string(num2)<<endl;
}

void concatenate(float x,float y)
{
    cout<<to_string(x)+to_string(y)<<endl;
}

int main()
{
    string first;
    string second;

    int x,y;
    float a,b;
    cout<<"Enter first string:";
    cin>>first;
    cout<<"Enter second string";
    cin>>second;
    cout<<"Enter the value of x ";
    cin>>x;
    cout<<"Enter the value of y ";
    cin>>y;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    concatenate(first,second);
    concatenate(x,y);
    concatenate(a,b);
    return 0;
}


//Q.13 to calculate power functon with exponenet 

#include<iostream>
#include<cmath>
using namespace std;
int powerValue(double base,int exponenet=3)
{
    return pow(base,exponenet);
}

int main()
{
    int base;
    int exponenet=3;
    char choice;
    cout<<"Enter base value: ";
    cin>>base;
    cout<<"Do you want to enter exponent : (y/n)";
    cin>>choice;

    if(choice=='y' || choice =='Y')
    {
        cout<<"Enter the value of the expoenent:";
        cin>>exponenet;
    }
    cout<<"The power of the the "<<base<<" is "<<powerValue(base,exponenet);

}