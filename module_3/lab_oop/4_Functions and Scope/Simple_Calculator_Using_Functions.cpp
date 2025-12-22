#include <iostream>
using namespace std;

class Calculator 
{
public:
    float add(float a, float b) 
	{
        return a + b;
    }

    float subtract(float a, float b) 
	{
        return a - b;
    }

    float multiply(float a, float b) 
	{
        return a * b;
    }

    float divide(float a, float b) 
	{
        if (b != 0)
            return a / b;
        else 
		{
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
    }
};

int main() 
{
    float num1, num2, result;
    char op;
    Calculator calc;

    cout << "===== Simple Calculator =====" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    if (op == '+')
        result = calc.add(num1, num2);
    else if (op == '-')
        result = calc.subtract(num1, num2);
    else if (op == '*')
        result = calc.multiply(num1, num2);
    else if (op == '/')
        result = calc.divide(num1, num2);
    else {
        cout << "Invalid operator!" << endl;

    }

    cout << "\nResult: " << num1 << " " << op << " " << num2 << " = " << result << endl;

}

