/*
Makhai Morgan
Homework 4 - loops
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // Use a do-while loop to ensure the code runs at least once
    do {
        cout << "Enter a number greater than or equal to 10: ";
        cin >> number;

        if (number < 10)
            cout << "Invalid input. Please try again.\n";
        
    } while (number < 10); // Repeat while the number is less than 10

    cout << number << " is a valid number!" << endl;

    int num1, num2;
    int minNum, maxNum;

    // Ask user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Determine which is smaller and which is larger
    if (num1 < num2) {
        minNum = num1;
        maxNum = num2;
    } else {
        minNum = num2;
        maxNum = num1;
    }

    cout << "\nNumbers from " << minNum << " to " << maxNum << ":\n";

    // Use while loop to print numbers from min to max
    int current = minNum;
    while (current <= maxNum) {
        cout << current << " ";
        current++;
    }

    cout << endl; // Move to next line after printing all numbers

    const int DIM = 11;

        for (int i = 0; i < DIM; i++) {
            for (int j = 0; j < DIM; j++) {
                // Draw the vertical line of 'R'
                if (j == 0)
                    cout << "#";
                // Draw the top and middle horizontal lines
                else if ((i == 0 || i == DIM / 2) && j < DIM - 2)
                    cout << "#";
                // Draw the right side of the upper loop
                else if (j == DIM - 2 && i < DIM / 2 && i != 0)
                    cout << "#";
                // Draw the diagonal leg of 'R'
                else if (i - j == DIM / 2 - 1 && i >= DIM / 2)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << endl;
        }

    return 0;
}