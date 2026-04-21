/*
 * Program: Days to Seconds Converter
 * Description: Asks the user for a number of days and calculates
 *              the equivalent number of seconds.
 *
 * Conversion factors:
 *   1 day    = 24 hours
 *   1 hour   = 60 minutes
 *   1 minute = 60 seconds
 *   Therefore: 1 day = 24 * 60 * 60 = 86,400 seconds
 */

#include <iostream>
using namespace std;

int main() {

    // Declare variables to store user input and the result
    long long days;
    long long seconds;

    // Constant: number of seconds in a single day
    const long long SECONDS_PER_DAY = 24 * 60 * 60; // 86,400 seconds

    // Prompt the user to enter the number of days
    cout << "Enter the number of days: ";
    cin >> days;

    // Validate that the user entered a non-negative number
    if (days < 0) {
        cout << "Error: Please enter a non-negative number of days." << endl;
        return 1; // Exit with error code
    }

    // Calculate the total number of seconds
    // Multiply the number of days by the seconds in one day
    seconds = days * SECONDS_PER_DAY;

    // Display the result to the user
    cout << days << " day(s) = " << seconds << " second(s)" << endl;

    return 0; // Program completed successfully
}