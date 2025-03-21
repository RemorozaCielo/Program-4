#include <iostream>
using namespace std;

bool isLeapYear(int year) {
 // If the year is divisible by 4
 if (year % 4 == 0) {
 // If the year is divisible by 100
 if (year % 100 == 0) {
 // If the year is divisible by 400
 if (year % 400 == 0) {
 return true; // It's a leap year
 } else {
 return false; // Not a leap year
 }
 } else {
 return true; // It's a leap year
 }
 } else {
 return false; // Not a leap year
 }
}

int main() {
 int year;
 cout << "Enter a year: ";
 cin >> year;

 if (isLeapYear(year)) {
 cout << year << " is a leap year." << endl;
 } else {
 cout << year << " is not a leap year." << endl;
 }

 return 0;
}
