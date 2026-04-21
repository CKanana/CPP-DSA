

#include <iostream>
using namespace std;


void populateArray(double arr[], int size) {

    cout << "\n--- Enter " << size << " values ---" << endl;

   
    for (int i = 0; i < size; i++) {

        
        cout << "Enter value " << (i + 1) << ": ";
        cin >> arr[i]; 
    }
}



double calculateAverage(double arr[], int size) {

    double sum = 0.0; 

    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    double average = sum / (double)size;

    return average; 
}
void displayResults(double arr[], int size, double average) {

    cout << "\n------ Array Values & Average ------" << endl;

    for (int i = 0; i < size; i++) {
        cout << "  Value[" << (i + 1) << "] = " << arr[i] << endl;
    }


    cout << "------------------------------------" << endl;
    cout << "  Average    = " << average           << endl;
    cout << "------------------------------------" << endl;
}
int main() {
    const int SIZE = 5;
    double values[SIZE];

    cout << "========================================" << endl;
    cout << "   Array Input and Average Calculator   " << endl;
    cout << "========================================" << endl;

    populateArray(values, SIZE);

    double average = calculateAverage(values, SIZE);
    displayResults(values, SIZE, average);

    return 0; 
}