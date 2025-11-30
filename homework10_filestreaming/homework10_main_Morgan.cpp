#include<iostream>
#include<string>
using namespace std;

// prototypes
void readFile(const string &filename);
int countWords(const string &filename);
int countEarth(const string &filename);

int main() {
    string filename = "Remembering_Earth.txt";

    cout<<"\n---- Example 1: Displaying File Content ---\n";
    readFile(filename);

    cout<<"\n---- Example 2: Counting Words ---\n";
    int totalWords = countWords(filename);
    cout<<"Total words: "<<totalWords<<endl;

    cout<<"\n---- Example 3: Counting 'Earth' ---\n";
    int earthCount = countEarth(filename);
    cout<<"'Earth' appears "<<earthCount<<"times.\n";

    return 0;
}

