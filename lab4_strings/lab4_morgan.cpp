/*
Makhai Morgan
Lab 4, string and string methods 
Sep 8, 2025
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: string indexing ----- "<<endl;
    string first_name = "David";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name.at(0)<<endl;


    cout<<"\n ----- Example 2: amount of character inna string ----- "<<endl;
    int characters = first_name.length();
    cout<<"There is "<<characters<<" character/s in "<<first_name<<endl;

    cout<<"\n ----- Example 3: concatenate character/s inna string ----- "<<endl;
    string last_name = "Sam";
    string username = "ABC123";
    cout<<"concatenated word = "<<first_name + last_name + username<<endl;

    cout<<"\n ----- Example 4: substracting charactersd in a string ----- "<<endl;
    string msg = "Today we have wonderful weather!";
    // extract 5 characters from the 3rd character
    string subst_char = msg.substr(2, 5);
    cout<<"Extracted characters = "<<subst_char<<endl;

    cout<<"\n ----- Example 5: inserting charactersd in a string ----- "<<endl;
    // insert the word "maybe"
    msg.insert(5, "maybe");
    cout<<"After insert method = "<<msg<<endl;

    cout<<"\n ----- Example 6: inserting characters to the end of a string ----- "<<endl;
    msg.append(" -- by Makhai Morgan");
    cout<<"After append method = "<<msg<<endl;

    cout<<"\n ----- Example 7: inserting characters to the end of a string ----- "<<endl;
    msg.replace(17,9,"bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n ----- Example 8: erasing characters from a string ----- "<<endl;
    // erase the word 'Today'
    msg.erase(0,5);
    cout<<"After erase method = "<<msg<<endl;

    cout<<"\n ----- Example 9: finding characters in a string ----- "<<endl;
    // find method returns the index number of the first found.
    // if the character was not found, it returns -1
    // find the word 'Prof'

    int index_prof = msg.find("Prof");
    cout<<"The index of Prof. = "<<index_prof<<endl;

    cout<<"\n ----- EXERCISE ----- "<<endl;
    string word ="";
    cout<<"Enter a word: ";
    cin>>word;



    return 0;
}

// --- AI Assistant Used: ChatGPT ---
// Was the code correct? (Yes/No)
// Was it readable and properly commented?
// Were you able to explain each line of code?
// Did it use the same programming concepts we learned in class?
// Terminal Output: (Paste the output of your program here)