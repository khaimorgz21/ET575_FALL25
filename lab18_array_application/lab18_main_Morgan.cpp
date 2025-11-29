#include<iostream>
using namespace std;

// Prototypes
int collectnumber(int arr[], int maxSize);
double Averagenumber(int arr[], int size);
int Closestmean(int arr[], int size, double avg);
void Printresult(double avg, int closest);

int main() {
    int numbers[5];
    int count;

    // 1. Collect user input
    count = collectnumber(numbers, 5);

    // Handle case where no numbers were entered
    if (count == 0) {
        cout<<"No numbers entered. Program ending.\n";
        return 0;
    }

    // 2. Calculate average
    double avg = Averagenumber(numbers, count);

    // 3. Find closest number to the average
    int closest = Closestmean(numbers, count, avg);

    // 4. Print result
    Printresult(avg, closest);

    return 0;
}