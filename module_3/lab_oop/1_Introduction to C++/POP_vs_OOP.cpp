#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    
    void getData() 
	{
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    float calculateArea() 
	{
        return length * width;
    }


    void displayArea()
	 {
        cout << "Area of Rectangle = " << calculateArea() <<"\n";
    }
};

int main() 
{

    Rectangle rect;


    rect.getData();
    rect.displayArea();

    return 0;
}

