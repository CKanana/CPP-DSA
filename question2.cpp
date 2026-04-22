
#include <iostream>
#include <cmath>      
using namespace std;

int main() {

    double radius;
    double volume;
    const double PI = 3.141592653589793;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    if (radius <= 0) {
        cout << "Error: Radius must be a positive number." << endl;
        return 1; 
    }

    double rCubed = pow(radius, 3);  
    volume = (4.0 / 3.0) * PI * rCubed;

    
    cout << "\n--- Sphere Volume Calculation ---" << endl;
    cout << "Radius        : " << radius << endl;
    cout << "r³ (r cubed)  : " << rCubed << endl;
    cout << "Volume        : " << volume << endl;

    return 0;
}
    