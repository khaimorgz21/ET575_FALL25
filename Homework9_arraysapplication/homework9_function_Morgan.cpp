#include<iostream>
using namespace std;

// FUNCTION 1: Ask for valid array size
int arraysize() {
    int size;

    cout<<"Enter an array size between 1 and 100: ";
    cin>>size;

    while(size < 1 || size > 100) {
        cout<<"Invalid size. Enter a number between 1 and 100: ";
        cin>>size;
    }

    return size;
}

// FUNCTION 2: Randonly populate the array with 10 to 30
void randPopulate(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 21 + 10;  // random 10-30
    }
}

// FUNCTION 3: Print the array
void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// FUNCTION 4: Reverse the array contents
void reverse(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while(left < right) {
        // swap arr[left] and arr[right]
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right++;
    }
}