#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculate sum
    sum = num1 + num2;

    // Nested condition logic
    if (sum < 0) {
        cout << "False alarm! The sum is " << sum << endl;
    }
    else if (sum >= 1 && sum <= 100) {
        if (sum % 5 == 0) {
            cout << sum << " is a pentagon" << endl;
        }
        else if (sum % 2 != 0) {
            cout << sum << " is an odd guess" << endl;
        }
        else {
            cout << "The sum is " << sum << endl;
        }
    }
    else if (sum >= 101 && sum <= 200) {
        cout << "The new lucky number is " << sum << endl;
    }
    else if (sum >= 201 && sum <= 999) {
        cout << sum << " is a dreaming number" << endl;
    }
    else if (sum >= 1000) {
        if (sum >= 2000) {
            cout << sum << " approaches to the infinite and beyond!" << endl;
        }
        else if (sum % 2 == 0) {
            cout << sum << " approaches to the infinite evenly!" << endl;
        }
        else {
            cout << "The sum is " << sum << endl;
        }
    }
    else {
        cout << "The sum is " << sum << endl;
    }

    return 0;
}
