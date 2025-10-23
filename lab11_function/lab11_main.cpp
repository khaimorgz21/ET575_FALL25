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
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    bool result = isEven(num); // call the function to check evenness
    printResult(num, result); // call the function to print the result
    
    return 0;
}