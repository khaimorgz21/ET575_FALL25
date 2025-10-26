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
int collectNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

// function to calculate the distance of four point
float computeDistance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2 -x1, 2) + pow(y2 -y1, 2));
}

// function to print the result
void displayResult(float d) {
    cout << "The distance between the points is: " << d << endl;
}