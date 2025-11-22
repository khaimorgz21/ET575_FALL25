/*
Makhai Morgan
Nov 19, 2025
lab 17, 2D array
*/
#include<iostream>
#include "lab17_function_Morgan.cpp"

using namespace std;

int main(){
    cout<<"\n --- example 1: array declaration ---"<<endl;
    array_dec();

    cout<<"\n --- example 2: print each value in a 2D array ---"<<endl;
    const int NUMCOLS = 5;
    int ar[3][NUMCOLS] ={
        {5, 10},
        {-2, -9},
        {6}
    };

    print2d(ar,3);

    cout<<"\n --- example 3: populating an array with numbers ---"<<endl;
    // declare a 2D array
    int arr_num[2][3];

    // call the function
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout<<"\n --- example 4: sum of all numbers in a 2D array  ---"<<endl;
    int s = sum_all(arr_num, 2, 3);
    cout<<"The total sum "<<s<<endl;

    cout<<"\n --- example 5:odd numbers in a 2D array  ---"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers = "<<c<<endl;

    cout<<"\n --- EXERCISE  ---"<<endl;
    void populate(int arr[3][4]);
    double average(int arr[3][4]);

    srand(time(0));

        int numbers[3][4];
        char again = 'y';

        while (again == 'y' || again == 'Y'){
            populate(numbers);

            cout<<"\nGenerated 3x4 Table:\n";
            for (int r = 0; r < 3; r++){
                for (int c = 0; c < 4; c++){
                    cout<<numbers[r][c]<<"\t";
                }
                cout<<endl;
            }

            double avg = average(numbers);
            cout<<"\nAverage of numbers = "<<avg<<endl;

            cout<<"\nWould you like another run? (y/n): ";
            cin>>again;
        }

        cout<<"\nProgram ended.\n";
    return 0;
}