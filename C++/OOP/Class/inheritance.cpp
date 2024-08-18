#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
    public: 
        string brand = "Ford";
        void honk() {
        cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
    public: 
        string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}

// Multilevel inheritance
/*// Parent class
class MyClass {
    public: 
        void myFunction() {
        cout << "Some content in parent class." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class 
class MyGrandChild: public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}*/

// Multiple Inheritance 

/*// Base class
class MyClass {
    public:
        void myFunction() {
        cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
    public:
        void myOtherFunction() {
        cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}*/