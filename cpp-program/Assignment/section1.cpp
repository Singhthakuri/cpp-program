 // Q.2 write a cpp program to read two integer using cin and display the result

 #include<iostream>
 using namespace std;
int main()
{
     int a,b;
     cout<<"Enter value of a:";
    cin>>a;
     cout<<"Enter value of b:";
   cin>>b;
   cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
   return 0;
 }


// Q.3 exaples of manupulators like setw,endl,setprecision
#include<iostream>
 #include<iomanip>
 using namespace std;
 int main()
 {
     cout<<setw(15)<<"Helloworld"<<endl;
     cout<<setprecision(4)<<3.12344;
    return 0;
 }

// Q.4 to pass variable as a reference 
 #include<iostream>
 using namespace std;
 void display(int &x){
     x++;
};
 int main()
 {
     int x;
     cin>>x;
     cout<<"Orginal value of x before:"<<x<<endl;
     display(x);
    cout<<"The orginal value of x is:"<<x;


 }



//Q.5 dynamic memroy allocaiton using new and delete to delocate
 #include<iostream>
 using namespace std;
 int main()
{
    int* arr=new int{};
   cout<<"Enter Numbers in Array: 5 "<<endl;
    for(int i=0;i<5;i++)
  {   
        cin>>arr[i];
   }
    // dispaly
    cout<<"Displaying the result"<<endl;
    for(int i=0;i<5;i++)
   {
        cout<<arr[i]<<" ";
    }
   delete[] arr;
    return 0;
 }


//Q.6 && Q.12  scope operator in cpp  ::
 #include<iostream>
 using namespace std;
 int x=10;
int main()
 {
     int x=20;
    {
     int  x=40;
        cout<<"Display inside block value of x:"<<x<<endl;
        cout<<"Global variable x:"<<::x<<endl;
    }
    cout<<"outside block scope:"<<x<<endl;
}

// Q.8 to read and write character 

#include<iostream>
 using namespace std;
int main()
{
    char s;
    cin.get(s); //entering s
    cout.put(s);// displaying s

    return 0;
 }


//Q.9 Enum
#include <iostream>
using namespace std;
enum Day {
    Sunday,     // 0
    Monday,     // 1
    Tuesday,    // 2
    Wednesday,  // 3
    Thursday,   // 4
    Friday,     // 5
    Saturday    // 6
};

int main() {
    int dayValue;

    cout << "Enter a number (0 to 6) to get the day of the week: ";
    cin >> dayValue;

    // Check for valid range
    if (dayValue < 0 || dayValue > 6) {
        cout << "Invalid day value!" << endl;
        return 1;
    }

    // Convert int to enum
    Day day = static_cast<Day>(dayValue);
    switch (day) {
        case Sunday:    cout << "Sunday"; break;
        case Monday:    cout << "Monday"; break;
        case Tuesday:   cout << "Tuesday"; break;
        case Wednesday: cout << "Wednesday"; break;
        case Thursday:  cout << "Thursday"; break;
        case Friday:    cout << "Friday"; break;
        case Saturday:  cout << "Saturday"; break;
    }
    cout << endl;
    return 0;
}



//Q.10 type conversion 
 #include<iostream>
 using namespace std;
 int main()
 {
     int x=65;
     cout.put(x)<<endl; //A implicit done by conpiler
     double z=x+12;
     cout<<z<<endl;
     //explicit 
      float s=3.1415;
      cout<<(int)s;
 }

//Q.12 getline in cpp 
 #include<iostream>
 using namespace std;
 int main()
 {
   
     string name;
     getline(cin,name); //gajendra Singh
     cout<<name<<endl;
    cin>>name; //gajendra singh
     cout<<name<<endl;
         //getline whole line cin stop when find spaces 
 }

//Q.13 write sentence and count the no of word

#include<iostream>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    
}