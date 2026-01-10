#include <iostream>
using namespace std;

class ArrayCalculator 
{
public:
    void calculate() 
	{
        int n, sum = 0;
        float average;

        cout << "Enter the number of elements: ";
        cin >> n;

        int arr[n];

        cout << "Enter " << n << " integers:\n";
        for (int i = 0; i < n; i++) 
		{
            cin >> arr[i];
            sum += arr[i];
        }

        average = (float)sum / n;

        cout << "\nSum = " << sum;
        cout << "\nAverage = " << average;
    }
};

int main() 
{
    ArrayCalculator obj;
    obj.calculate();
}

