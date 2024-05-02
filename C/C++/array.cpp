#include <iostream>
#include <string>
using namespace std;

/* int main(){
    string cars[4]={"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0];
    return 0;
} */

// Loop array
int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }
    return 0;
}

/*int main() {
    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";
    for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
    }
    return 0;
}*/