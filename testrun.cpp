#include <iostream>
using namespace std;

int main() {
    int* ptr;      
    int var = 7;
    ptr = &var;    

    cout << "Pointer 1 = " << ptr << endl;
    cout<<"value 1 = "<<*ptr<<endl;
    return 0;
}
