#include<iostream>
#include<cstdlib> 
#include<time.h> 
using namespace std; 

//function to collect the size of an array
int collect_size() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    return size;
}

//function to populate the array with random numbers 1-99
void populate_numbers(int ar[], int s) {
    for(int i = 0; i < s; i++) {
        ar[i] = rand() % 99 + 1; // random number 1-99
    }
}

//function to print all array numbers
void print_numbers(int ar[], int s) {
    cout<<"Array values: ";
    for(int i = 0; i < s; i++) {
        cout<<ar[i]<< " ";
    }
    cout<<endl;
}

//function to find the minimum number
int array_min(int ar[], int s) {
    int min = ar[0]; // start with first number

    for(int i = 1; i < s; i++) {
        if(ar[i] < min) {
            min = ar[i];
        }
    }
    return min;
}

//function to calculate the average
float array_avg(int ar[], int s) {
    int sum = 0;

    for(int i = 0; i < s; i++) {
        sum += ar[i];
    }

    return static_cast<float>(sum) / s;
}

// MAIN PROGRAM
int main() {
    srand(time(0));  // seed random generator

    // collect size
    int num = collect_size();

    // declare array with user size
    int a[num];

    // fill array with numbers
    populate_numbers(a, num);

    // print array
    print_numbers(a, num);

    // output minimum and average
    cout<<"Minimum number:\t"<<array_min(a, num)<<endl;
    cout<<"Average of numbers:\t"<<array_avg(a, num)<<endl;

    return 0;
}