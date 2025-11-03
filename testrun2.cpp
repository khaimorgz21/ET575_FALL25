#include <iostream>
using namespace std;

int main() {
    int* ptr;      
    int var = 7;
    int foo = 21;
    ptr = &var;  
    ptr = &foo;

    cout<<"Pointer 2 = "<<ptr<<endl;
    cout<<"value 2 = "<<*ptr<<endl;
    return 0;
}