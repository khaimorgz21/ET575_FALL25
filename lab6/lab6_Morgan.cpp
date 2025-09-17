/*
Makhai Morgan
Sep 15, 2025
lab 6, nested conditional statement and switch
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: nested conditional statement ----- "<<endl;
    int n = 5;
    if (n>0){
        if(n%2==0)
        cout<<"The number is positive and EVEN"<<endl;
    
        else
            cout<<"The number is positive and ODD"<<endl;
    }

  else if(n<0){

  }
    if(n%2==0){
        cout<<"The number is negative and EVEN"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }
    cout<<"\n ----- Example 2:  organize three numbers in decreasing order ----- "<<endl;
    // declare the identifiers (variable names)
    int num1, num2, num3;

    // display a message and collect the three numbers
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    // check if num1 is greater than num2 and num3
    if(num1>num2 && num1>num3){
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    // check if num2 is the greatest
    else if (num2>num1 && num2>num3 ){
        if (num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    // check if num3 is the greatest 
    else if(num3>num2 && num3>num1){
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    else{
        cout<<"All three numbers are the same!";
    }

    cout<<"\n ----- Example 3: switch ----- "<<endl;
    // select a day-off using switch-case statement
    int dayoff;
    cout<<"Select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cin>>dayoff;

    switch (dayoff)
    {
    case 1:
        cout<<"You are off on Monday"<<endl;
        break;
    case 2:
        cout<<"You are off on Tuesday"<<endl;
        break;
    case 3:
        cout<<"You are off on Wednesday"<<endl;
        break;
    case 4:
        cout<<"You are off on Thursday"<<endl;
        break;
    case 5:
        cout<<"You are off on Friday"<<endl;
        break;
        default:
        cout<<"Unable to read the day-off"<<endl;
        break;
    }

    cout<<"\n ----- Example 4: switch to select a gender ----- "<<endl;
    char gender=' ';
    cout<<"Select a gender: "<<endl;
    cout<<"m or M for male"<<endl;
    cout<<"f or F for female"<<endl;
    cin>>gender;

    switch (gender)
    {
    case 'm': case 'M':
        cout<<"Gender = MALE"<<endl;
        break;
    case 'f': case 'F':
        cout<<"Gender = FEMALE"<<endl;
        break;
    case 'o': case 'O':
        cout<<"Gender = OTHERS"<<endl;
        break;
    default:
        cout<<"Gender = UNDEFINED"<<endl;
        break;
    }

    long savings;
    cout << "Enter the amount of your savings: ";
    cin >> savings;

    
    cout<<"\n ----- EXERCISE 1----- "<<endl;

    if (savings < 0) {
        cout << "With $" << savings << " you should have some savings!" << endl;
    }
    else if (savings > 0 && savings < 200000) {
        cout << "With $" << savings << " you can afford: Keep saving!" << endl;
    }
    else if (savings >= 200000 && savings <= 500000) {
        cout << "With $" << savings << " you can afford an Apartment or Co-op." << endl;
        if (savings <= 300000) {
            cout << " → Studio" << endl;
        } else if (savings <= 400000) {
            cout << " → 1 BR + 1 Bath" << endl;
        } else {
            cout << " → 2 BRs + 1 Bath" << endl;
        }
    }
    else if (savings >= 500001 && savings <= 1000000) {
        cout << "With $" << savings << " you can afford a House." << endl;
        if (savings <= 700000) {
            cout << " → 2 BRs + 2 Baths" << endl;
        } else {
            cout << " → 3 BRs + 3 Baths" << endl;
        }
    }
    else if (savings >= 1000001) {
        cout << "With $" << savings << " you can afford a Mansion." << endl;
    }


    cout<<"\n ----- EXERCISE 2----- "<<endl;

        int number;
        char choice;

        cout << "Enter a number: ";
        cin >> number;

        cout << "Do you want to double the number? (Y/y for yes, N/n for no): ";
        cin >> choice;

        switch(choice) {
            case 'Y':
            case 'y':
                number *= 2; // double the number using assignment operator
                break;
            case 'N':
            case 'n':
                // keep the number as it is
                break;
            default:
                number = 0; // reset to zero
            }   

            cout << "The number is set to " << number << endl;

    return 0;
}