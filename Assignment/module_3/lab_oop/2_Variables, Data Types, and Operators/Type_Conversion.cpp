#include <iostream>
using namespace std;

class TypeConversion 
{
private:
    int a;
    float b;

public:
    void getData() 
	{
        cout << "Enter an integer value (a): ";
        cin >> a;
        cout << "Enter a decimal value (b): ";
        cin >> b;
    }

    void showConversion() 
	{
        float result1 = a + b;
        cout << "\nImplicit Type Conversion:\n";
        cout << "a + b = " << result1 << "\n";

        int result2 = (int)b + a;
        cout << "\nExplicit Type Conversion:\n";
        cout << "(int)b + a = " << result2 << "\n";
    }
};

int main() 
{
    TypeConversion obj;
    obj.getData();
    obj.showConversion();

    return 0;
}

