//unary mean simple ++,==,=,+ using 

//using +
// #include<iostream>
// using namespace std;
// class Sum{
//     public:
//     int x;
//     Sum(int x):x(x){}
//     void operator +(){
//         ++x;
//     };
//     void display()
//     {
//         cout<<"value is: "<<x<<endl; 
//     }
// };
// int main()
// {
//     Sum a(1);
//     a.display(); //before
//     +a;
//     a.display(); //after
// }

//using -
// #include<iostream>
// using namespace std;
// class Sum{
//     public:
//     int x;
//     int y;
//     int z;
//     Sum(int x,int y,int z):x(x),y(y),z(z){}
//     void operator +(){
//         x=-x;
//         y=-y;
//         z=-z;
//     };
//     void display()
//     {
//         cout<<"value is: "<<x<<endl;
//         cout<<"value is: "<<y<<endl; 
//         cout<<"value is: "<<z<<endl; 

//     }
// };
// int main()
// {
//     Sum a(1,3,4);
//     a.display(); //before
//     +a;
//     a.display(); //after
// }

//pre-increment
// #include<iostream>
// using namespace std;
// class Sum{
//     public:
//     int x;
 
//     Sum(int x):x(x){}
//     void operator ++(){
//        ++x;
//     };
//     void display()
//     {
//         cout<<"value is: "<<x<<endl;
//     }
// };
// int main()
// {
//     Sum a(1);
//     a.display(); //before
//     ++a;
//     a.display(); //after
// }

//post

// #include<iostream>
// using namespace std;
// class Sum{
//     public:
//     int x;
 
//     Sum(int x):x(x){}
//     void operator ++(int){
//        ++x;
//     };
//     void display()
//     {
//         cout<<"value is: "<<x<<endl;
//     }
// };
// int main()
// {
//     Sum a(1);
//     a.display(); //before
//     a++;
//     a.display(); //after
// }

//using = urinary operator
#include<iostream>
using namespace std;
class Uniary{
    int x,y;
    public:
    Uniary(int x,int y):x(x),y(y){}
    bool operator==(Uniary t){
        return(x==t.x);
    }
    
};
int main(){
    Uniary s(2,4),t(2,3);
        if(s==t){
            cout<<"true";
        }else cout<<"false";
}