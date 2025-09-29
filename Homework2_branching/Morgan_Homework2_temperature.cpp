#include <iostream>
using namespace std;

int main() {
    int choice, temp, result;

    cout << "=== Temperature Conversion Menu ===\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Kelvin to Celsius\n";
    cout << "4. Kelvin to Fahrenheit\n";
    cout << "5. Exit\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: // Celsius to Fahrenheit
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            result = (temp * 9.0 / 5.0) + 32;
            cout << temp << " Celsius is equal to " << result << " Fahrenheit" << endl;
            break;

        case 2: // Fahrenheit to Celsius
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            result = (temp - 32) * 5.0 / 9.0;
            cout << temp << " Fahrenheit is equal to " << result << " Celsius" << endl;
            break;

        case 3: // Kelvin to Celsius
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            result = temp - 273.15;
            cout << temp << " Kelvin is equal to " << result << " Celsius" << endl;
            break;

        case 4: // Kelvin to Fahrenheit
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            result = (temp - 273.15) * 9.0 / 5.0 + 32;
            cout << temp << " Kelvin is equal to " << result << " Fahrenheit" << endl;
            break;

        case 5: // Exit
            cout << "Exiting program. Goodbye!" << endl;
            return 0;

        default: // Invalid choice
            cout << "Invalid option. Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
