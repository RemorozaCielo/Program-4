#include <iostream>
using namespace std;

double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                throw runtime_error("Error: Division by zero is not allowed.");
            }
        default:
            throw invalid_argument("Error: Invalid operator.");
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    try {
        double result = calculate(num1, num2, op);
        cout << "The result is: " << result << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
