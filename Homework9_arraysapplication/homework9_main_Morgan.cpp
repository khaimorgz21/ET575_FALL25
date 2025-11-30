#include<iostream>
using namespace std;

// Function prototypes:
int arraysize();
void randPopulate(int arr[], int size);
void print(int arr[], int size);
void reverse(int arr[], int size);

int main() {
    srand(time(0)); // initialize random generator

    int sizearray = arraysize();   // Get array size
    int noise[sizearray];          // Declare array with given size

    // Populate array with random values
    randPopulate(noise, sizearray);

    // Display original array
    cout<<"\nOriginal Set:\n";
    print(noise, sizearray);

    // Reverse the array
    reverse(noise, sizearray);

    // Display reversed array
    cout<<"\nReversed Set:\n";
    print(noise, sizearray);

    return 0;
}