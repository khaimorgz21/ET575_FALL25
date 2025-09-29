/*Homework 2: Branching

Makhai Morgan
*/

#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt user to enter age
    cout << "Enter your age: ";
    cin >> age;

    // Check validity and eligibility
    if (age < 0 || age > 120) {
        cout << "Invalid age. Please enter a valid age." << endl;
    }
    else if (age < 13) {
        cout << "Enter your age: " << age << endl;
        cout << "Not eligible for any activities." << endl;
    }
    else if (age >= 13 && age <= 17) {
        cout << "Enter your age: " << age << endl;
        cout << "Eligible for youth activities." << endl;
    }
    else if (age >= 18 && age <= 64) {
        cout << "Enter your age: " << age << endl;
        cout << "Eligible for adult activities." << endl;
    }
    else { // age >= 65
        cout << "Enter your age: " << age << endl;
        cout << "Eligible for senior activities." << endl;
    }

    return 0;
}
