#include <iostream>
#include <string>
using namespace std;

int main() {
        // Step 1: Define constant PI
    const float PI = 3.14159;

    // Step 2: Input radius and height
    float radius, height;
    cout << "Enter radius (cm): ";
    cin >> radius;
    cout << "Enter height (cm): ";
    cin >> height;

    // Step 3: Check if radius > height
    bool isGreater = (radius > height);

    // Step 4: Check if radius == height
    bool isEqual = (radius == height);

    // Step 5: Triple height and increase radius by 5 (assignment operators)
    height *= 3;
    radius += 5;

    // Step 6: Check radius != height AND radius > height
    bool condition = (radius != height) && (radius > height);

    // Step 7: Calculate volume
    float volume = PI * radius * radius * height;

    // Step 8: Display results
    cout << "\n------------------------------ RESULT ACTIVITY 2 ----------------------------\n";
    cout << "Step 3) Is the radius greater than height?\t\t\t" << isGreater << endl;
    cout << "Step 4) Is the radius equal to height?\t\t\t\t" << isEqual << endl;
    cout << "Step 5) Triple height =\t\t\t\t\t" << fixed << setprecision(1) << height << "cm" << endl;
    cout << "Step 5) Increased radius by 5 =\t\t\t\t" << fixed << setprecision(1) << radius << "cm" << endl;
    cout << "Step 6) Is the radius not equal to and greater than height ?\t" << condition << endl;
    cout << "Step 7) The volume of a right cylinder with radius " 
         << radius << "cm and height " << height 
         << "cm is = " << volume << "cm^3" << endl;

    return 0;
}
