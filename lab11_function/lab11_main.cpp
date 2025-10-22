/*
Makhai Morgan
lab 11, introduction to function
*/
#include<iostream>
#include "lab11_function.cpp"

using namespace std;

int main(){
    cout<<"\n ------- Example 1: void function -------- "<<endl;
    printhello();
    printhello();
    printhello();

    cout<<"\n ------- Example 2: void function with arguments-------- "<<endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);
    greeting("Carl");

    cout<<"\n ------- Example 3: function with returning value-------- "<<endl;
    int savefive = returnfive();
    cout<<"The return value is           \t "<<savefive<<endl;
    savefive +=2 ;
    cout<<"The return value after += 2 = \t "<<savefive<<endl;

    cout<<"\n ------- Example 4: code after the return -------- "<<endl;
    printsome();
    int n = somenumber();
    cout<<"Some number \t "<<n<<endl;

    cout<<"\n ------- Example 5: calculate area of square -------- "<<endl;

    float area_square = areasquare(2.5);
    cout<<"The area of a square is \t"<<area_square<<endl;

    cout<<"\n ------- Example 6: product of two numbers -------- "<<endl;
    int p = product(2,3);
    cout<<"The product is  \t"<<p<<endl;

    cout<<"\n ------- Example 7: calculate the fahrenheit temperature -------- "<<endl;
    double f = fah(12.5);
    printfah(f);

    cout<<"\n ------- Example 8: check a number -------- "<<endl;
    int x = -1;
    string checknum = checknumber(3);
    printnumber(x, checknum);

    cout<<"\n ------- EXERCISE -------- "<<endl;
    // Function 1: Check if a number is even
    bool isEven(int number) {
        if (number % 2 == 0) {
            return true;
        } else {
            return false;
        }
    }

    // Function 2: Print the result
    void printResult(int number, bool result) {
        cout << "Is " << number << " even? " << (result ? "true" : "false") << endl;
    }
    
    int num;

    // Ask user for input
    cout << "Enter an integer number: ";
    cin >> num;

    // Call the first function and store result
    bool result = isEven(num);

    // Call the second function to print output
    printResult(num, result);

    return 0;
}