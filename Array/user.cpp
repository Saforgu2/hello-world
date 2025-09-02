#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    string cars[3] = {
        "Corvette",
        "Mustang",
        "Camry"
    };

    cars[0] = "BMW";

    cout << cars[0] << '\n';

    return 0;
}