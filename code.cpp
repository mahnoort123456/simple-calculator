#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    // Display a menu
    cout << "Simple Calculator\n";
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Read two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the calculation
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed.\n";
            break;
        default:
            cout << "Error: Invalid operation.\n";
            break;
    }

    return 0;
}

