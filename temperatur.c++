#include <iostream>

using namespace std;

int main() {
    int choice;  
    cout << "Select temperature scale: " << "\n"
        << "1. Celsius" << "\n"
        << "2. Fahrenheit" << "\n"
        << "3. Kelvin" << endl;

    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        float celsius;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        float fahrenheit = (celsius * 9 / 5) + 32;
        float kelvin = celsius + 273.15;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
        cout << "Temperature in Kelvin: " << kelvin << endl;

    } else if (choice == 2) {
        float fahrenheit;
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        float celsius = (fahrenheit - 32) * 5 / 9;
        float kelvin = celsius + 273.15;
        cout << "Temperature in Celsius: " << celsius << endl;
        cout << "Temperature in Kelvin: " << kelvin << endl;

    } else if (choice == 3) {
        float kelvin;
        cout << "Enter temperature in Kelvin: ";
        cin >> kelvin;
        float celsius = kelvin - 273.15;
        float fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Temperature in Celsius: " << celsius << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    } else {
        cout << "Invalid choice. Please select 1, 2, or 3." << endl;
    }

    return 0;
}
