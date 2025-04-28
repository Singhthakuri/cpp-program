// operator overloading means giving special meaning to an operator for your class objects. 

//syntax for operator overloading 
/*
return_type operator op (parameters) {
    // code
}
*/
// full syntax

/*
class Complex {
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};
*/

// addition using operator overloading
// #include<iostream>
// using namespace std;
// class Addition{
//     int x;
//     public:
//     Addition(int a):x(a){}
//     Addition& operator-(){
//         x= -x;
//         return *this;
//     }
//     // displaying outputs
//     void display(){
//         cout<<x;
//     }
// };

// int main()
// {
//     Addition x(20);
//     x.display();
//     -x;
//     x.display();


// }

//without return types

// #include<iostream>
// using namespace std;
// class Operator{
//     int x,y;
//     public:
//     Operator(int a,int b):x(a),y(b){}
//     void operator*(){
//         cout<<x+y;
//     }

//     void display(){
//         cout<<x<<y;
//     }
// };
// int main()
// {
//     Operator x(3,4);
//     x.display();
//     *x;
// }


// with different object some advance topics 

#include<iostream>
using namespace std;
class Student{
     int a,b,c;
     public:
     Student(int a,int b,int c): a(a),b(b),c(c){}
     int operator+(){
            // return (x.a+x.b+x.c);
            return a+b+c;
     }
     void display(){
        cout<<a<<b<<c<<endl;
     }
    
    };

    int main(){
        Student s(1,2,3);
        Student t(2,3,4);
        s.display();
        t.display();
        int z=+s;
        int sum=+t;
        s.display();
        cout<<sum<<endl;
        cout<<z;
    }