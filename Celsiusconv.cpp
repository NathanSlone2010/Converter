#include <iostream>

using namespace std;
int main() {
    cout << "Celsius: ";
    int celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "Fahrenheit: " << fahrenheit;
    return 0;
}
