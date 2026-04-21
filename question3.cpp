

#include <iostream>
using namespace std;



double computeArea(double side) {
    
    return side * side;
}



double computePerimeter(double side) {
  
    return 4 * side;
}


void displayResults(double side, double area, double perimeter) {
    cout << "\n------ Square Calculations ------" << endl;
    cout << "Side Length : " << side      << endl;
    cout << "Area        : " << area      << endl;
    cout << "Perimeter   : " << perimeter << endl;
    cout << "---------------------------------" << endl;
}

int main() {

    
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;


    if (side <= 0) {
        cout << "Error: Side length must be a positive number." << endl;
        return 1; 
    }

    
    double area = computeArea(side);

    
    double perimeter = computePerimeter(side);

    
    displayResults(side, area, perimeter);

    return 0; 