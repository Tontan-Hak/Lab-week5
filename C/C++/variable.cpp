#include <iostream>
#include <string>
using namespace std;

/* int main() {
    int myNum = 15;
    cout << myNum;
    return 0;
} */

// OR
/*
int main(){
    int myNum;
    myNum = 27;
    cout << myNum;
} */


// Add #include <string>

// #include <string>

int main(){
    int myNum = 3;
    double myFloatNum = 3.33;
    char myLetter = 'T';
    string myText = "Hello World!";
    bool myBoolean = true; 

    // Print variables values
    cout <<"int:" <<myNum<< "\n";
    cout << "float:" << myFloatNum<< endl;
    cout << "char:" << myLetter<< "\n";
    // cout << "char:\n" << myLetter << ; Cannot
    cout << "string: "<<myText << "\n";
    cout << "bool: " << myBoolean << "\n"; 

    return 0;
}