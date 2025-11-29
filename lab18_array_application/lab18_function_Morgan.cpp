#include<iostream>
#include<cmath>
using namespace std;

// FUNCTION 1: Collect up to 5 non-zero numbers
int collectnumber(int arr[], int maxSize) {
    int count = 0;
    int num;

    cout<<"Enter up to 5 non-zero integers (enter 0 to stop):\n";

    while (count < maxSize) {
        cout<<"Enter number: ";
        cin>>num;

        if (num == 0) {   // sentinel value
            break;
        }

        arr[count] = num;
        count++;
    }

    return count; // number of values stored
}

// FUNCTION 2: Compute average
double Averagenumber(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}

// FUNCTION 3: Find number closest to average
int Closestmean(int arr[], int size, double avg) {
    int closest = arr[0];
    double minDiff = abs(arr[0] - avg);

    for (int i = 1; i < size; i++) {
        double diff = abs(arr[i] - avg);
        if (diff < minDiff) {
            minDiff = diff;
            closest = arr[i];
        }
    }

    return closest;
}

// FUNCTION 4: Print result
void Printresult(double avg, int closest) {
    cout<<"\nThe closest number to average "
        <<avg<<" is "<<closest<<"."<<endl;
}