

#include <iostream>
#include <cctype>     
using namespace std;


int checkCase(char ch) {

    
    if (!isalpha(ch)) {
        return -1; 
    }

   
    if (isupper(ch)) {
        return 1; 
    }

   
    return 0; 
}



void displayResult(char ch, int result) {
    cout << "\n--- Result ---" << endl;

    if (result == 1) {
        
        cout << "'" << ch << "' is an UPPERCASE letter." << endl;
    } else if (result == 0) {
       
        cout << "'" << ch << "' is a lowercase letter." << endl;
    } else {
        
        cout << "'" << ch << "' is not a letter (neither uppercase nor lowercase)." << endl;
    }
}



int main() {

    
    char ch;

  
    cout << "Enter a character: ";
    cin >> ch;

    int result = checkCase(ch);

    displayResult(ch, result);

    return 0; 
}