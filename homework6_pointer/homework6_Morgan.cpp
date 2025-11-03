/*
Makhai Morgan
Homework 6, functions and introduction to pointers and reference
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function 1: generate a random integer between 1 and 20
int rand_side() {
    return rand() % 20 + 1; // values from 1 to 20 inclusive
}

// Function 2: compute hypotenuse given two sides
double hyp(int side1, int side2) {
    double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
    return hypotenuse;
}

// Function 3: Prints sides and hypotenuse in the required format
void print_result(int side1, int side2, double hypotenuse) {
    cout << fixed << setprecision(2); // show two decimal places
    cout << "The hypotenuse of a right angle with side "
         << side1 << " and " << side2
         << " is = " << hypotenuse << endl;
}

// Example use
int main() {
    srand(time(0));  // seed the random number generator

    int a = rand_side();
    int b = rand_side();
    double c = hyp(a, b);

    cout << "Random sides: " << a << " and " << b << endl;
    cout << "Hypotenuse = " << c << endl;

    return 0;
}