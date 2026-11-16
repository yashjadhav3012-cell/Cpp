// Q.2) Write C++ program of Simple Calculator
// a. Implement a calculator with operations: +, −, *, /.
// b. Throw an exception for division by zero or invalid operator


#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    try {
        if (op == '+')
            result = a + b;
        else if (op == '-')
            result = a - b;
        else if (op == '*')
            result = a * b;
        else if (op == '/') {
            if (b == 0)
                throw "Error: Division by zero!";
            result = a / b;
        } 
        else
            throw "Error: Invalid operator!";

        cout << "Result: " << result << endl;
    } 
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}