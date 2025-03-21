#include <iostream>  // Standard input-output library
#include <ctime>     // Library for handling date and time functions

using namespace std; // Use standard namespace

int main() {
    // Declare variables for name and birthdate
    string name;
    int birthYear, birthMonth, birthDay;

    // Prompt user for input
    cout << "Enter your name: ";
    getline(cin, name);  // Get full name including spaces

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;

    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;

    // Get the current date using time library
    time_t now = time(0);  // Get current system time
    tm *current = localtime(&now);  // Convert to struct tm for date extraction

    int currentYear = 1900 + current->tm_year;  // Extract current year
    int currentMonth = 1 + current->tm_mon;     // Extract current month
    int currentDay = current->tm_mday;          // Extract current day

    // Calculate age directly
    int age = currentYear - birthYear - ((currentMonth < birthMonth) || 
              (currentMonth == birthMonth && currentDay < birthDay));

    // Display the name and calculated age
    cout << "\nHello, " << name << "!" << endl;
    cout << "Your exact age is: " << age << " years old." << endl;

    return 0;  // Indicate successful execution
}
