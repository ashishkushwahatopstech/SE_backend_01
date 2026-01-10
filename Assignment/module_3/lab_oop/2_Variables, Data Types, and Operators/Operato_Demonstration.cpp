#include <iostream>
using namespace std;

class Operator 
{
private:
    int a, b;

public:
    void getData() 
	{
        cout << "\nEnter the first number (a): ";
        cin >> a;
        cout << "Enter the second number (b): ";
        cin >> b;
    }

    void showResults() 
	{
        cout << "\n----- Arithmetic Operators -----\n";
        cout << "a + b = " << a + b << "\n";
        cout << "a - b = " << a - b << "\n";
        cout << "a * b = " << a * b << "\n";
        cout << "a / b = " << a / b << "\n";
        cout << "a % b = " << a % b << "\n";

        cout << "\n----- Relational Operators -----\n";
        cout << "a == b : " << (a == b) << "\n";
        cout << "a != b : " << (a != b) << "\n";
        cout << "a > b  : " << (a > b) << "\n";
        cout << "a < b  : " << (a < b) << "\n";
        cout << "a >= b : " << (a >= b) << "\n";
        cout << "a <= b : " << (a <= b) << "\n";

        cout << "\n----- Logical Operators -----\n";
        cout << "(a > 5 && b < 10) : " << ((a > 5) && (b < 10)) << "\n";
        cout << "(a > 5 || b > 10) : " << ((a > 5) || (b > 10)) << "\n";
        cout << "!(a > b) : " << (!(a > b)) << "\n";

        cout << "\n----- Bitwise Operators -----\n";
        cout << "a & b  = " << (a & b) << "\n";
        cout << "a | b  = " << (a | b) << "\n";
        cout << "a ^ b  = " << (a ^ b) << "\n";
        cout << "~a     = " << (~a) << "\n";
        cout << "a << 1 = " << (a << 1) << "\n";
        cout << "a >> 1 = " << (a >> 1) << "\n";
    }
};

int main() 
{
    Operator obj;
    obj.getData();
    obj.showResults();


}

