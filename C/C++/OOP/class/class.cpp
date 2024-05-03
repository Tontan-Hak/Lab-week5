#include <iostream>
using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod() {   // Method/function
        cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
    return 0;
}

// Define function outside the class

/*class MyClass {         // The class
  public:               // Access specifier
    void myMethod();    // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
    cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
    return 0;
}*/

// We can add parameter

/*class Car {
    public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    Car myObj;
    cout << myObj.speed(200);
    return 0;
}*/