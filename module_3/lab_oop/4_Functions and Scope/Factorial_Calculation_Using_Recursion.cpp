#include <iostream>
using namespace std;

class Factorial 
{
public:
	int i;
    int findFactorial(int n) 
	{
        int fact = 1;
        for (i = 1; i <= n; i++) 
		{
            fact = fact * i;
        }
        return fact;
    }
};

int main() 
{
    int num;
    Factorial obj;

    cout << "Enter a number to find its factorial: ";
    cin >> num;

    if (num < 0) 
	{
        cout << "Factorial is not defined for negative numbers." << endl;
    } 
	else 
	{
        cout << "Factorial of " << num << " is: " << obj.findFactorial(num) << endl;
    }

}

