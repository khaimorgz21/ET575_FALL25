/*
Makhai Morgan
Oct 24, 2025
lab 12: scoping, and predefined functions
*/
#include<iostream>
#include<cmath>

using namespace std;

// example 1: function that calculates and returens the sum of two numbers
int add(int num1, int num2){
    int sum = num1 + num2; // sum is a local variable in function add()
    cout<<"the sum in function add() is \t"<<sum<<endl;
    return sum;
}

// example 3: c++ predefine functions
// functions passes tewo arguments, calcaulate and returns the hypotenusa of a right triangle.
float hyp(float side1, float side2){
    return sqrt(pow(side1, 2)+ pow(side2, 2));
}

// function to print result
void printhyp(float s1, float s2, float h){
    cout<<"The hypotenuse of side "<<s1<<" and "<<s2<<" is "<<h<<endl;
}

// EXERCISE
// function to collect a number greater than 0
double getPositiveNumbers(string prompt) {
    double num;
    do {
        cout << prompt;
        cin >> num;
        if (num <= 0) {
            cout << "Please enter a number great than zero."<<endl;
        } 
    } while (num <= 0); // Loop until the number is valid
    return num;
}

// function to calculate the distance of four point
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 -x1, 2) + pow(y2 - y1, 2));
    return distance;
}

// function to print the result
void printResult(double x1, double y1, double x2, double y2, double distance) {
    cout<<"The distance of points(" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << distance << endl;
}