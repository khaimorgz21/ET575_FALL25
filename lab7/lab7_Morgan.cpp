#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2;
    char operation;

        cout<<"\n ----- Example 1: Addition ----- "<<endl;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /, %, q to quit): ";
        cin >> operation;

        switch (operation) {
            case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            default:
                cout << "This example only shows addition." << endl;
        }

        cout<<"\n ----- Example 2: Subtraction ----- "<<endl;

         cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /, %, q to quit): ";
        cin >> operation;

         switch (operation) {
            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            default:
                cout << "This example only shows subtraction." << endl;
        }

        cout<<"\n ----- Example 3: Multiplication ----- "<<endl;

          cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /, %, q to quit): ";
        cin >> operation;

         switch (operation) {
            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            default:
                cout << "This example only shows multiplication." << endl;
        }

        cout<<"\n ----- Example 4: Division by zero ----- "<<endl;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /, %, q to quit): ";
        cin >> operation;

         switch (operation) {
            case '/':
              if (num2 != 0){
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }  else  {
                cout << "Error: Division by zero is not allowed." << endl;
            }
               break;
            default:
                cout << "This example only shows division." << endl;
        }

        cout<<"\n ----- Example 5: Modulus ----- "<<endl;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /, %, q to quit): ";
        cin >> operation;

         switch (operation) {
            case '%':
              if (num2 != 0){
                cout << "Result: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
            }  else  {
                cout << "Error: Modulus by zero is not allowed." << endl;
            }
               break;
            default:
                cout << "This example only shows modulus." << endl;
        }

        cout<<"\n ----- Example 6: Quit Program ----- "<<endl;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /, %, q to quit): ";
        cin >> operation;

        switch (operation) {
            case 'q':
            case 'Q':
                cout << "Exiting Program. Goodbye!" << endl;
                return 0; // program ends
            default:
                cout << "This example only shows quit program." << endl;
        }

    return 0;    
}