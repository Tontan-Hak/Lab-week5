#include <iostream>
using namespace std;

int myFunction(int x , int y) { 
    return x + y ;
}

/* int main(){
    cout << myFunction(3, 33);
    return 0;
} */

// Stor the result 

int main() {
    int z = myFunction(5, 3);
    cout << z;
    return 0;
}