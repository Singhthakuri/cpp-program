// create a simple student mangement system
// create a student class includeing name,collage roll no ,facultly,current_semester,
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include<thread>
#include <fstream>
using namespace std;
class Student
{
private:
    string collage = "Kmc";
    string faculty;
    int collage_roll;
    string current_sem;

public:
    string name;
    bool scholor = false;
    void getdata()
    {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student faculty: ";
        getline(cin, faculty);
        cout << "Enter student Semester:";
        getline(cin, current_sem);
        cout << "Enter student Roll no: ";
        cin >> collage_roll;
        cin.ignore();
    }

    void scholorship()
    {
        scholor = true;
    }
    void noscholorship()
    {
        scholor = false;
    }
    void display()
    {
        cout << "------------------Student Details---------------------" << endl;
        cout << "student name: " << name << endl;
        cout << "student faculty: " << faculty << endl;
        cout << "student collage: " << collage << endl;
        cout << "student semester: " << current_sem << endl;
        cout << "student Roll no: " << collage_roll << endl;
    }
    void display(ostream &write)
    {
        write << "------------------Student Details---------------------" << endl;
        write << "student name: " << name << endl;
        write << "student faculty: " << faculty << endl;
        write << "student collage: " << collage << endl;
        write << "student semester: " << current_sem << endl;
        write << "student Roll no: " << collage_roll << endl;
    }
};
// suppose if student have library card create a library class
class Library : public Student
{
private:
    bool haveLibraryCard = false;
    vector<string> *Books = new vector<string>();

public:
    void makeLibrary()
    {
        haveLibraryCard = true;
    }

    void addbooks()
    {
        if (Books->size() >= 2)
        {
            cout << "Sory you have already taken maximum books from Library";
        }
        else
        {
            cout << "Add only two Books:" << endl;
            int count = 1;
            int spacetoaddNewBook = 2 - Books->size();
            if (!spacetoaddNewBook)
            {
                cout << "You have maximum no of Books:" << endl;
                displayBooks();
                cin.ignore();
            }
            string newbook;
            for (int i = 0; i < spacetoaddNewBook; i++)
            {
                cout << count << ".";
                getline(cin, newbook);
                Books->push_back(newbook);
                count++;
            }
        }
    }

    void displayBooks(ostream &write)
    {
        if (Books->empty())
        {
            write << "You have not taken any Books" << endl;
            return;
        }
        write << "--------Books You have Taken--------" << endl;
        int count = 1;
        for (const auto &singleBool : *Books)
        {
            write << "->" << " " << singleBool << endl;
        }
    }

    void displayBooks()
    {
        if (Books->empty())
        {
            cout << "You have not taken any Books" << endl;
            return;
        }
        cout << "--------Books You have Taken--------" << endl;
        int count = 1;
        for (const auto &singleBool : *Books)
        {
            cout << "->" << " " << singleBool << endl;
        }
    }
    void returnAllbooks()
    {
        Books->clear();
        cout << "Your Book list has Been cleared" << endl;
        return;
    }
};

class Administrator : public Library
{
private:
    const float accountFee = 16000.00;
    float amount = 00.00;
    float deu = 16000.00;
    float discount = 0.0;

public:
    void payfee()
    {

        Student::display();
        cout << "Enter total amount you want to Store:";
        cin >> amount;
        if (scholor)
        {
            discount = 0.70;
            float finalAmount = accountFee * (1 - discount);
            if (amount > finalAmount)
            {
                deu = 0.0;
            }
            else
            {
                cout << "You have to pay amount of " << finalAmount - amount << endl;
                deu = finalAmount - amount;
            }

            if (deu <= 0.0)
            {
                deu = 0.0;
                cout << "All cleared" << endl;
            }
            else
            {
                cout << "due Amount Rs " << deu << endl;
            }
        }
        else
        {
            discount = 0;
            if (amount < accountFee)
            {
                deu = accountFee - amount;
                cout << "You have to pay amount of " << accountFee - amount << "  " << " Remaning dues " << deu << endl;
            }
            else
            {
                deu = 0.0;
                cout << "No deu remaning all cleared" << endl;
            }
        }
    }

    void BilingStatus()
    {
        cout << "lets watch to your Collage fee" << endl;
        cout << "you have pay Rs " << amount << "" << endl;
        cout << "you have " << deu << "  dues to pay" << endl;
        cout << "You have got " << discount << " Discount " << endl;
    }

    void BilingStatus(ostream &write)
    {
        write << "you have pay Rs " << amount << "" << endl;
        write << "you have " << deu << "  dues to pay" << endl;
        write << "You have got " << discount << " Discount " << endl;
    }
};

void userInput()
{
    cout << "************************ Choose 1 according you want to do some task **************************" << endl;
    cout << "Enter 1 to insert datas the Management System" << endl;
    cout << "Enter 2 to display Student Detail" << endl;
    cout << "Enter 3 to check about its Library Books Detail" << endl;
    cout << "Enter 4 to take book from Library" << endl;
    cout << "Enter 5 to perform fee Payment" << endl;
    cout << "Enter 6 to check the Billing Status" << endl;
    cout << "Enter 7 to Display all the details of the Student" << endl;
    cout << "Enter 8 to take a break from the System" << endl;
}

class HeadOffics : public Administrator
{
public:
    void PrintStudentDetails()
    {
        Administrator::display();
        Administrator::displayBooks();
        Administrator::BilingStatus();
    }
};

int main()
{
    HeadOffics usr;
    int choices;
    string data;
    cout << "------------Welcome to this Complete Student Management System-------------" << endl;
    cout << "Let me Know what types of operations you want to do:" << endl;
    bool validcondition = true;

    while (validcondition)
    {
        userInput();
        cout << "------------------Choose numbers between the given Ranges-----------" << endl;
        cin >> choices;
        cin.ignore();

        switch (choices)
        {
        case 1:
            usr.getdata();
            break;

        case 2:
            usr.display();
            break;
        case 3:
            usr.displayBooks();
            break;
        case 4:
            usr.addbooks();
            break;

        case 5:

            char val;
            cout << "Does " << usr.name << " " << "Has got scholorshup(y/n)";
            cin.get(val);
            if (val == 'Y' || val == 'y')
            {
                usr.scholorship();
            }
            else
            {
                usr.noscholorship();
            }
            usr.payfee();

            break;
        case 6:
            usr.display();
            usr.BilingStatus();
            break;
        case 7:
            cout << "************************************************************************************************" << endl;
            usr.PrintStudentDetails();
            break;
        case 8:
        {  
            ofstream myfile("student.txt");
           
            if (myfile.is_open())
            {
                usr.display(myfile);
                usr.displayBooks(myfile);
                usr.BilingStatus(myfile);
                myfile.close();
                this_thread::sleep_for(chrono::seconds(2));
            }else
            {
                cout<<"Something went wrong while writing......."<<endl;
            }


            ifstream readfile("student.txt");
            if(readfile.is_open())
            {       cout<< "\033[1;32m Displaying Students Details:-\033[0m"<<endl;
                while(getline(readfile,data))
                {
                    cout<<data<<endl;
                    this_thread::sleep_for(chrono::milliseconds(500));
                }
                readfile.close();
            }else
            {
                cout<<"Something went wrong while reading a file "<<endl;
            }
            break;
        }

        case 9:
            cout << "Thanks for Exploring this System" << endl;
            validcondition = false;
            break;

        default:
            cout << "Invalid choice please check the valid one:";
            break;
        }
    }
}