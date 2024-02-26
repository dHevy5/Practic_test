#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    char x;

    cout << "Enter the operatoin: " << endl;
    cin >> x;
    switch (x)
    {
    case '+':
    {
        double plus = a + b;
        cout << "Solvece: " << plus;
        break;
    }
    case '-':
    {
        double minus = a - b;
        cout << "Solvece: " << minus;
        break;
    }
    case '*':
    {
        double multiplus = a * b;
        cout << "Solvece: " << multiplus;
        break;
    }
    case '/':
    {
        double share = a / b;
        cout << "Solvece: " << share;
        break;
    }

    }
    return 0;

}