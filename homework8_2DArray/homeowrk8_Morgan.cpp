#include<iostream>
using namespace std;

const int ROWCOL_ARRAY = 4;

// Function 1: search for a value in a 2D array
// Saves result in index[0] (row) and index[1] (column)
void searchValue(int ar[ROWCOL_ARRAY][ROWCOL_ARRAY], int value, int index[2]) {
    for (int r = 0; r < ROWCOL_ARRAY; r++) {
        for (int c = 0; c < ROWCOL_ARRAY; c++) {
            if (ar[r][c] == value) {
                index[0] = r; // row found
                index[1] = c; // col found
                return;       // stop searching
            }
        }
    }

    // If we reach here, value NOT found
    index[0] = -1;
    index[1] = -1;
}

// Function 2: display message based on returned index
void displayMessage(int value, int index[2]) {
    if (index[0] != -1) {
        cout<<"Number "<<value<<" was found in row "
            <<index[0]<<" and column "<<index[1]<<"."<<endl;
    } else {
        cout<<"Number "<<value<< " was not found."<<endl;
    }
}

int main() {
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int searchnum;
    int index[2];

    cout<<"Enter a number to search for: ";
    cin>>searchnum;

    // call function to search
    searchValue(ar, searchnum, index);

    // call function to display message
    displayMessage(searchnum, index);

    return 0;
}