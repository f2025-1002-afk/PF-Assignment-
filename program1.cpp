#include <iostream>
#include <iomanip>

int main() {
    using namespace std;

    double num1, num2;
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;

    cout << fixed << setprecision(3);

    cout << "\n--- Floating-Point Arithmetic ---\n";
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;

    if (num2 != 0.0)
        cout << "Quotient: " << num1 / num2 << endl;
    else
        cout << "Quotient: Undefined (division by zero)" << endl;

    int int1 = static_cast<int>(num1);
    int int2 = static_cast<int>(num2);

    cout << "\n--- Integer Arithmetic (after casting) ---\n";
    cout << "First number cast to int: " << int1 << endl;
    cout << "Second number cast to int: " << int2 << endl;

    cout << "Sum: " << int1 + int2 << endl;
    cout << "Difference: " << int1 - int2 << endl;
    cout << "Product: " << int1 * int2 << endl;

    if (int2 != 0)
        cout << "Quotient: " << int1 / int2 << endl;
    else
        cout << "Quotient: Undefined (division by zero)" << endl; 

    return 0;
}