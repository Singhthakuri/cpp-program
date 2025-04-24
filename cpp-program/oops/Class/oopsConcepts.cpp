// concepts of the class and methods 
/*(OOps) defination:
                oops encapulates data (attributes ) and functions(behaviours) into a single unit is known as class
    class is the blueprient of the real world objects
        *class has no phusical existence and no occupy memory
        *object has physical existence and occupy memory 
            
    ------------->C++ class and OOPS Concepts 
    -------->Encapsulatio   --hides internal details
    --------->Inheritance      --Reusability of code
    ---------->Polynorphism        --Different behaviour for same function
    ----------->Abstraction          -- Hides complexity
*/
// *----------------- This is simple Oops and class program using private and public class ---------


#include<iostream>
using namespace std;
class first{
    private:
    int count;

    public:
    //constructor 
    first(int v){
        count=v;
    }
    //setter
    void setval(int x){
        count=x;
    }
    //getter
    int get(){
        return count;
    }; 

    int subtract(int x){
        return x-count;
    }
};

int main()
{
    first a(20);
    cout<<a.get()<<endl;
    a.setval(400);
    cout<<a.get()<<endl;
    cout<<a.subtract(500);

}
/*

//Encapsulation 

#include<iostream>
using namespace std;
class Animal{
    private:
     int value;
    public:
    void setval(int x){
        value=x;
    }

    int getAnimal(){
        return value;
    }
};
int main()
{
    Animal a;
    a.setval(200);
    cout<<a.getAnimal();
}



//Inheritance
#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void sound() {
        cout << "Animal Sound" << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog Barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // Inherited from Animal class
    d.bark();   // Dog's own function
}



//Polymorphism
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {   // Virtual function
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* s1;
    Circle c;
    Square sq;

    s1 = &c;
    s1->draw();  // Calls Circle's draw()

    s1 = &sq;
    s1->draw();  // Calls Square's draw()
}

//Abstraction

#include <iostream>
using namespace std;

class AbstractClass {
public:
    virtual void display() = 0;  // Pure virtual function
};

class DerivedClass : public AbstractClass {
public:
    void display() {
        cout << "Derived Class Display Function" << endl;
    }
};

int main() {
    DerivedClass d;
    d.display();
}
*/