/*
Makhai Morgan
Homework 3 - for loop
*/

#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    int number;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    cout << "Enter 10 numbers:\n";

    for (int i = 1; i <= 10; i++) {
        cout << " Number " << i << ": ";
        cin >> number;

        if (number > 0)
            positiveCount++;
        else if (number < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    cout << "\nTotal positive numbers = " << positiveCount << endl;
    cout << "Total negative numbers = " << negativeCount << endl;
    cout << "Total zeros = " << zeroCount << endl;

    int numDays;
    double sales, totalSales = 0.0, averageSales;

    cout << "Enter the number of days: ";
    cin >> numDays;

    // Loop through each day to get sales input
    for (int i = 1; i <= numDays; i++) {
        cout << "Enter sales for day " << i << ": $";
        cin >> sales;
        totalSales += sales; // Accumulate total sales
    }

    // Calculate average sales
    averageSales = totalSales / numDays;

    // Display results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nTotal sales $" << totalSales << " for " << numDays
         << " days.  Average daily sales $" << averageSales << endl;

         
    return 0;
}