#include <iostream>
using namespace std;

class MultiplicationTable 
{
private:
    int num;

public:
	int i;
    void getNumber() 
	{
        cout << "Enter a number to display its multiplication table: ";
        cin >> num;
    }

    void displayTable() 
	{
        cout << "\nMultiplication Table of " << num << ":\n";
        for (i = 1; i <= 10; i++) 
		{
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }
};

int main() 
{
    MultiplicationTable table;
    table.getNumber();
    table.displayTable();
}

