#include <iostream>
using namespace std;

class Variable
{
public:
    int x;

    Variable() 
	{
        x = 10;
    }

    void show() 
	{
        int y = 5;
        cout << "Inside function:" << endl;
        cout << "Global variable x = " << x << endl;
        cout << "Local variable y = " << y << endl;
    }
};

int main() 
{
    Variable obj;

    cout << "Inside main:" << endl;
    cout << "Global variable x = " << obj.x << endl;

    obj.show();

}

