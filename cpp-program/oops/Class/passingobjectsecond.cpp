#include<iostream>
using namespace std;
class area{
    private:
    int length;
    int breadth;
    int height;
    public:
    void getdata()
    {       
        int count=0;
        cout<<"you are entering the datas for object"<<endl;
        cout<<"Enter length:";
        cin>>this->length;
        cout<<"Enter breadth:";
        cin>>this->breadth;
        cout<<"Enter height:";
        cin>>this->height;

    }

    void areaOfrect(area s,area s1)
    {
          int area=s.length*s1.breadth;
           cout<<"Area of Rectangle is :"<<area<<endl;  
    }

    void areasquare(area s){
            cout<<"Area of circle is :"<<s.length*s.length<<endl;
    }

    void calculateVolume(area s,area s1,area s2){
        cout<<"volume is "<<s.length*s1.breadth*s2.height<<endl;
    }
};

int main()
{
    area t,t1,t2,t3;
    t.getdata();
    t1.getdata();
    t2.getdata();
    t3.areaOfrect(t,t1);
    t3.areasquare(t);
    t3.calculateVolume(t,t1,t2);
    return 0;
}