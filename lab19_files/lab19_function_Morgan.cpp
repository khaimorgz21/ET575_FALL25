/**
 * Makhai Morgan
 * Nov 24, 2025
 * lab 19, files and console input
 */
#include<iostream>
#include<fstream>

using namespace std;

// example 1: console input failure
// function to check if num values is the proper data type
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(cin.fail())
        {cout<<"Error! input dismatched data type!"<<endl;
        num = -1;
        }
    else
        {cout<<"Entered number = "<<num<<endl;}
    
    // clear the cin statde
    cin.clear();
    cin.ignore(10000, '\n');

    cout<<"END OF FUNCTION. Number = "<<num<<endl;

}

// example 2: console input to validate an input data type
float validatenumber(){
    float n;
    bool isNotValid = false;

    do{
        cout<<"Enter a number: ";
        cin>>n;
        isNotValid = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');
    }while(isNotValid);

    return n;
}

// example 3: set object for input and output
ifstream fin;
ofstream fout;

void readfile(string filename){
    fin.open(filename);

    // variable 'line' is used to store each line of samplefile.txt
    string line; 

    // loop through each line in samplefile.txt
    int linecounter = 1;
    while(getline(fin,line)){
        cout<<line<<endl;
        linecounter ++;
    }

    // close file
    fin.close();
}

// example 4: writing a file
// fout will write in a new or existing file. fout overwrite all the content of an existing file
void writefile(string filename){
    fout.open(filename);

    // write some content
    for(int n = 1; n<=3; n++){
        fout<<"Good morning "<<n<<endl;
    }

    fout<<"ET 575"<<endl;

    // close the file
    fout.close();

}

// example 5: append data into a file
void appendfile(string filename){
    fout.open(filename, ios::app);

    // append 
    fout<<"\n ----- APPEND -----"<<endl;
    for(int n = 3; n>0; n--){
        fout<<n<<endl;
    }
    // write a single line
    fout<<"GAME OVER!"<<endl;

    // close file
    fout.close();

// EXERCISE
}