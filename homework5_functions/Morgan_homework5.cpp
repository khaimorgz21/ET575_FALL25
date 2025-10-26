/*
Makhai Morgan
Homework 5- fucntions
Oct 25, 2025
*/

#include<iostream>
#include<cmath>
using namespace std;

// Function to get valid wind speed
int speed() {
    int s;
    cout<<" Enter wind speed (0 < speed < 100): ";
    cin >> s;

    while (s <= 0 || s >= 100) {
        cout<<" Invalid input. Enter wind speed again (0 < speed < 100): ";
        cin >> s;
    }
    return s;
}

// Function to get valid temperature
float temp() {
    float t;
    cout<<" Enter temperature in Celsius (-90 < temp <= 10): ";
    cin >> t;

    while (t > 10 || t <= -90) {
        cout<<" Invalid input. Enter temperature again (-90 < temp <= 10): ";
        cin >> t;
    }
    return t;
}

// Function to calculate wind chill index
float windspeed(int v, float tem) {
    // Formula: WCI = 13.12 + 0.6215T - 11.37*v^0.16 + 0.3965*T*v^0.16
    float wci = 13.12 + (0.6215 * tem) - (11.37 * pow(v, 0.16)) + (0.3965 * tem * pow(v, 0.16));
    return wci;
}

// Function to display result
void prompt_result(float wci) {
    cout<<" The wind index is: " << wci << endl;
}

// Main function (must not be modified)
int main() {
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s, t));
    return 0;
}

// Function to collect a number from the user
int collectNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

// Function to check if numbers are in descending order
bool inOrder(int n1, int n2, int n3) {
    if (n1 > n2 && n2 > n3)
        return true;
    else
        return false;
}

// Function to display result and allow user to run again
void runProgram(int n1, int n2, int n3, bool desc_order) {
    char choice;

    if (desc_order)
        cout << "The numbers are in descending order." << endl;
    else
        cout << "The numbers are NOT in descending order." << endl;
    
    cout << "Do you want to run the program again (Y/N): ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        int num1 = collectNumber();
        int num2 = collectNumber();
        int num3 = collectNumber();
        bool order = inOrder(num1, num2, num3);
        runProgram(num1, num2, num3, order); // recursive call to repeat
    } else {
        cout << "Program terminated." << endl;
    }
}

// Main function (must NOT be modified)
int num() {
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1, num2, num3);
    runProgram(num1, num2, num3, desc_order);
    return 0;
}
