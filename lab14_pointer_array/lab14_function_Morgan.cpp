/*
Makhai Morgan
Nov 12, 2025
lab 14: introduction to array, pointers and references
*/
#include<string>

using namespace std;

void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

    // declare the pointer
    int* pointerint;
    char* pointerchar;
    string* pointerstring;

    // testing the memory address
    cout<<"memory address of int "<<pointerint<<endl;

    // pointer with initial value. Value is the memory address of the pointed variable
    pointerint = &num;
    pointerchar = &c;
    pointerstring = &n;

    // check reference value of each pointer
    cout<<"Reference value int = "<<pointerint<<endl;
    cout<<"Reference value char = "<<pointerint<<endl;
    cout<<"Reference value string = "<<pointerint<<endl;

    // dereference operators
    cout<<"Dereference value of int "<<*pointerint<<endl;
    cout<<"Dereference value of char "<<*pointerint<<endl;
    cout<<"Dereference value of string "<<*pointerint<<endl;
}

// example 2
// function that passes a value
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
    v = "inside printvalue function";
}

// function that passes a reference
void printbyreference(string& v){
    cout<<"Passes by reference = \t"<<v<<endl;
    v = "Updated sentence";
}

//function that passes a memory address
void printaddress(string* v){
    cout<<"Pass memory address = \t"<<v<<endl;
}

// example 3: arrays
void arrays(){
    // declare an array with five values
    int scores[5];

    // assigning/accessing individual cells in an array
    scores[0] = 60;
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;

    cout<<"Array = \t"<<scores<<endl;
    cout<<"The third scores is "<<scores[2]<<endl;

    // initializing values to ana array
    int age_children[3] = {12,8,5};
    cout<<"The 1st age = "<<age_children[0]<<endl;

    // when an array is declared with initial values, the size of the array can be omitted
    string names[]={"Annie","Peter","Carl","Charles","Brain"};
    cout<<"The fourth name is "<<names[3]<<endl;
}

// example 4: array sizes
void sizeofarrays(){
    cout<<"size of char \t"<<sizeof(char)<<endl;
    cout<<"size of int \t"<<sizeof(int)<<endl;
    cout<<"size of double \t"<<sizeof(double)<<endl;
    cout<<"size of string \t"<<sizeof(string)<<endl;

    int age_children[3] = {2,8,5};
    cout<<"Size of age_children \t"<<sizeof(age_children)<<endl;
    cout<<"Size of age_children \t"<<sizeof(age_children) / sizeof(age_children[0])<<endl;
}

// example 5: loop in an array
void looparray(){
    string names[]={"Annie","Peter","Carl","Charles","Brain"};
    int sizenames = sizeof(names)/sizeof(names[0]);
    int counter = 0;
    for(int i = 0; i<sizenames; i++ ){
        cout<<names[i]<<"\t";
        // count how many names has 5+ characters
        if (names[i].length() >= 5){
            counter ++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter<<" names with 5+ characters!"<<endl;
}

// EXERCISE
void exercise(){
    // declare an array with five values
    int scores[5];

    // assigning/accessing individual cells in an array
    scores[0] = 60; // first value has index 0
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;

    // set maximum score
    int maxscore = scores[0];


    
}