//using two values or two objects
// #include<iostream>
// using namespace std;
// class Sum{
//     int x;
//     int y;
//     public:
//     Sum(int x,int y):x(x),y(y){}
//     Sum operator +(Sum s){
//         Sum obj(0,0);
//         obj.x=x+s.x;
//         obj.y=y+s.y;
//         return obj;
//     }
//     void display(){
//         cout<<"value of x: "<<x<<endl;
//         cout<<"value of y: "<<y<<endl;
//     }
// };
// int main()
// {
//     Sum s(3,4),t(1,2);
//     Sum u(1,1);
//     u=s+t;
//     u.display();
//     return 0;
// }

//using - operator
// #include<iostream>
// using namespace std;
// class Sum{
//     int x;
//     int y;
//     public:
//     Sum(int x,int y):x(x),y(y){}
//     Sum operator -(Sum s){
//         Sum obj(0,0);
//         obj.x=x-s.x;
//         obj.y=y-s.y;
//         return obj;
//     }
//     void display(){
//         cout<<"value of x: "<<x<<endl;
//         cout<<"value of y: "<<y<<endl;
//     }
// };
// int main()
// {
//     Sum s(3,4),t(1,2);
//     Sum u(1,1);
//     u=s-t;
//     u.display();
//     return 0;
// }

//using friend functions +,

// #include<iostream>
// using namespace std;
// class Sum{
//     int x;
//     int y;
//     public:
//     Sum(int x,int y):x(x),y(y){}
//     friend Sum operator +(Sum s,Sum t);
    
//     void display(){
//         cout<<"value of x: "<<x<<endl;
//         cout<<"value of y: "<<y<<endl;
//     }
// };
// Sum operator +(Sum s,Sum t){
//     Sum u(0,0);
//     u.x=s.x+t.x;
//     u.y=s.y+t.y;
//    return u;
// }
// int main()
// {
//     Sum s(3,4),t(1,2);
//     Sum u=s+t;
//     u.display();
//     return 0;
// }


//operator -

// #include<iostream>
// using namespace std;
// class Sum{
//     int x;
//     int y;
//     public:
//     Sum(int x,int y):x(x),y(y){}
//     friend Sum operator -(Sum s,Sum t);
    
//     void display(){
//         cout<<"value of x: "<<x<<endl;
//         cout<<"value of y: "<<y<<endl;
//     }
// };
// Sum operator -(Sum s,Sum t){
//     Sum u(0,0);
//     u.x=s.x-t.x;
//     u.y=s.y-t.y;
//    return u;
// }
// int main()
// {
//     Sum s(3,4),t(1,2);
//     Sum u=s-t;
//     u.display();
//     return 0;
// }

//using += operator without function 
#include<iostream>
using namespace std;
class Hello{
    int x;
    int y;
    public:
    Hello(int x,int y):x(x),y(y){}
    void operator+=(Hello s)
    {
        x+=s.x;
        y+=s.y;
    }

    void display(){
        cout<<x<<","<<y;
    }
};
int main(){
    Hello s(1,0),t(2,0);
    s+=t;
    s.display();
}

//using friend functions 
#include<iostream>
using  namespace std;
class Hello{
    int x,y;
    public:
    Hello(int x,int y):x(x),y(y){}
    friend Hello operator+=(Hello ,Hello);
    void display(){
        cout<<x<<" "<<y;
    }
};
Hello operator+=(Hello s,Hello t){
        Hello u(0,0);
        u.x=s.x+=t.x;
        u.y=s.y+=t.y;
        return u;
}

int main()
{
    Hello s(1,2),t(2,6);
    Hello u=s+=t;
    u.display();
}