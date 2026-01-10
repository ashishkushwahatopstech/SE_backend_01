#include <iostream>
using namespace std;

class Calculator 
{
public:
    float a, b;

    float add() 
	{
        return a + b;
    }

    float subtract() 
	{
        return a - b;
    }

    float multiply() 
	{
        return a * b;
    }

    float divide() 
	{
        if (b != 0)
            return a / b;
        else 
		{
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() 
{
    Calculator calc;
    int choice;

    cout << "===== Simple Calculator =====" << endl;
    cout << "Enter first number: ";
    cin >> calc.a;
    cout << "Enter second number: ";
    cin >> calc.b;

    cout << "\nSelect Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "\nResult: ";
    switch (choice) 
	{
    case 1:
        cout << calc.add();
        break;
    case 2:
        cout << calc.subtract();
        break;
    case 3:
        cout << calc.multiply();
        break;
    case 4:
        cout << calc.divide();
        break;
    default:
        cout << "Invalid choice!";
    }

    cout << endl;

}

