#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Ask the user for input
    cout << "Enter first integer (a): ";
    cin >> a;
    cout << "Enter second integer (b): ";
    cin >> b;

    // Perform arithmetic operations
    cout << "\nResults of arithmetic operations: \n";
    cout << "Addition (a + b): " << (a + b) << endl;
    cout << "Subtraction (a - b): " << (a - b) << endl;
    cout << "Multiplication (a * b): " << (a * b) << endl;

    if (b != 0) {
        cout << "Division (a / b): " << (a / b) << endl;
        cout << "Modulus (a % b): " << (a % b) << endl;
    } else {
        cout << "Division and modulus by zero are not allowed." << endl;
    }

    // Demonstrating assignment operators
    cout << "\nUsing assignment operators:\n";
    a += 10; // increment a by 10
    b -= 5;  // decrement b by 5
    
    cout << "Updated value of a (after a += 10): " << a << endl;
    cout << "Updated value of b (after b -= 5): " << b << endl;

    // Boolean (logical) operations
    cout << "\nBoolean (logical) operations:\n";

    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b?" << (a != b) << endl;
    cout << "Are both a and b positive numbers? " << ((a > 0) && (b > 0)) << endl;
    cout << "Is either a or b a negative number? " << ((a < 0) || (b <0)) << endl;
    cout << "Is a not greater than b? " << (!(a > b)) << endl;


    return 0;
}