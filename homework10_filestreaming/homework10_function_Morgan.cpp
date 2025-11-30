#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

// Function 1: Read file and print contents
void readFile(const string &filename) {
    ifstream infile(filename);

    if (!infile) {
        cout<<"Error: could not open file "<<filename<<endl;
        return;
    }

    string line;
    while(getline(infile, line)) {
        cout<<line<<endl;
    }

    infile.close();
}

// Function 2: Count words and write results to wordcounts.txt
int countWords(const string &filename) {
    ifstream infile(filename);

    if (!infile) {
        cout<<"Error: could not open file "<<filename<<endl;
        return 0;
    }

    int count = 0;
    string word;

    while(infile >> word) {
        count++;
    }

    infile.close();

    // write to wordcounts.txt
    ofstream outfile("wordcounts.txt");

    outfile<<"Student's full name: Makhai Morgan\n";
    outfile<<"Total number of words: "<<count<<"\n";

    outfile.close();

    return count;
}

// Function 3: Count occurrences of "Earth"
int countEarth(const string &filename) {
    ifstream infile(filename);

    if (!infile) {
        cout<<"Error: could not open file "<<filename<<endl;
        return 0;
    }

    int count = 0;
    string word;

    while(infile >> word) {
        if(word == "Earth" || word == "Earth.") {
            // also counts Earth.
            count++;
        }
    }

    infile.close();

    // Append to wordcounts.txt
    ofstream outfile("wordcounts.txt", ios::app);

    outfile<<"The word 'Earth appears "<<count<<"times in the document.\n";

    outfile.close();

    return count;
}