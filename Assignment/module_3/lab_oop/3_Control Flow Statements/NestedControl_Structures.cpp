#include <iostream>
using namespace std;

class TrianglePattern 
{
private:
    int rows;

public:
	int i,j;
    void getInput() 
	{
        cout << "Enter number of rows for the triangle: ";
        cin >> rows;
    }

    void displayPattern() 
	{
        cout << "\nRight-Angled Triangle Pattern:\n";
        for (i = 1; i <= rows; i++) 
		{
            for (j = 1; j <= i; j++) 
			{
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    TrianglePattern pattern;
    pattern.getInput();
    pattern.displayPattern();
    return 0;
}

