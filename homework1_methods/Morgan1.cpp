/*

Homework 1: strings, string methods, and numerical variables

Makhai Morgan:

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Initial strings
    string part1 = "Welcome to ";
    string part2 = "New York City";
    // Step 2: Collect name from keyboard
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // allows full names with spaces

    // Step 3: Concatenate strings
    string fullMessage = part1 + part2 + " " + name;

    // Step 5: Find length of concatenated string
    int lengthOfMessage = fullMessage.length();

    // Step 6: Find index of "ma"
    int indexOfMa = fullMessage.find("ma"); 

    // Step 7: Replace "ma" with "%---%"
    string replacedMessage = fullMessage;
    if (indexOfMa != string::npos) {
        replacedMessage.replace(indexOfMa, 2, "%---%");
    }

    // Step 8: Display results
    cout << "\n------------------------------ RESULT ACTIVITY 1 ----------------------------\n";
    cout << "concatenated message:\t" << fullMessage << endl;
    cout << "Message length:\t\t" << lengthOfMessage << endl;
    cout << "Index of character 'ma':\t" << (indexOfMa != string::npos ? to_string(indexOfMa) : "Not found") << endl;
    cout << "Replace 'ma' with %---%:\t" << replacedMessage << endl;
    
    return 0;