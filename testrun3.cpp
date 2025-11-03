#include <iostream>
using namespace std;

int main() {
    int* ptr;      
    int var = 7;
    int foo = 21;
    ptr = &var;  
    ptr = &foo;
    int& ref = var;

    cout<<"ref = "<<&ref<<endl;
    return 0;
}