#include <iostream>
using namespace std;

class Variable
{
public:
    const float PI;
    int num1;
    float num2;
    char grade;
    string name;
    bool isStudent;

    // Constructor to initialize values
    Variable() : PI(3.14159), num1(10), num2(5.5), grade('A'), name("Vrujal"), isStudent(true) {}

    void showData() 
    {
        int sum = num1 + 5;
        float product = num2 * 2;

        cout << "----- Variables and Constants Demo -----\n";
        cout << "Constant PI: " << PI << "\n";
        cout << "Integer num1: " << num1 << "\n";
        cout << "Floating number num2: " << num2 << "\n";
        cout << "Character grade: " << grade << "\n";
        cout << "String name: " << name << "\n";
        cout << "Boolean isStudent: " << isStudent << "\n";
        cout << "\nSum (num1 + 5) = " << sum << "\n";
        cout << "Product (num2 * 2) = " << product << "\n";
    }
};

int main() 
{
    Variable obj;
    obj.showData();
}

