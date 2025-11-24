/**
 * Makhai Morgan
 * Nov 24, 2025
 * lab 19, files and console input
 */
#include<iostream>
#include "lab19_function_Morgan.cpp"

using namespace std;

int main(){
    cout<<"\n------- Example 1: consule input failure ------"<<endl;
    checknumber();
    cout<<"\n------- Example 2: consule input failure in loop ------"<<endl;
    cout<<validatenumber()<<endl;

    cout<<"\n------- Example 3: reading a file ------"<<endl;
    readfile("samplefile.txt");

    cout<<"\n------- Example 4: writing content into a file ------"<<endl;
    writefile("outputfile.txt");

    cout<<"\n------- Example 5:  append data into a file ------"<<endl;
    appendfile("samplefile.txt");

    cout<<"\n------ EXERCISE ----"<<endl;
    
    return 0;
}