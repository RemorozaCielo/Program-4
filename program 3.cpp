#include <iostream>  // Include the standard input-output stream library

using namespace std; // Use the standard namespace

int main() {
    // Declare three variables to store user input
    double num1, num2, num3;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;  // Take input from the user

    double largest; // Variable to store the largest number

    // Check which number is the largest
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } 
    else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } 
    else {
        largest = num3;
    }

    // Display the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;  // Indicate successful program execution
}
