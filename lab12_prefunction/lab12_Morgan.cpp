/*
Makhai Morgan
Oct 24, 2025
lab 12: scoping, and predefined functions
*/
#include<iostream>
using namespace std;

// example 2: global variable
int num = 8;

void doSomething(){
    // global variable
    num += 20;
    cout<<"num in doSomething function: "<<num<<endl;
}

#include "lab12_functions.cpp"


int main(){
    cout<<"\n-------- example 1: local variables --------"<<endl;
    int sum = add(3,7) + add(1,6); // sum is local variable in the main() function
    cout<<"The total sum in main() is \t"<<sum<<endl;

    cout<<"\n-------- example 2: global variables --------"<<endl;
    doSomething();
    num = 5;
    cout<<"num in main function = \t"<<num<<endl;

    cout<<"\n-------- example 3: hypotenuse --------"<<endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1,s2);
    printhyp(s1, s2, h);

    cout<<"\n-------- EXERCISE --------"<<endl;
    int x1 = collectNumber();
    int y1 = collectNumber();
    int x2 = collectNumber();
    int y2 = collectNumber();

    float d = computeDistance(x1, y1, x2, y2);

    displayResult(d);


    return 0;
}