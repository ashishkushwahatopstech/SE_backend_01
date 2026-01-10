#include <iostream>
using namespace std;

class Person 
{
public:
    string name;
    int age;

    void getData() 
	{
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showData() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
public:
    int rollNo;

    void getStudentData() 
	{
        getData();
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void showStudentData() 
	{
        showData();
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Teacher : public Person 
{
public:
    float salary;

    void getTeacherData() 
	{
        getData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void showTeacherData() 
	{
        showData();
        cout << "Salary: " << salary << endl;
    }
};

int main() 
{
    Student s;
    Teacher t;

    cout << "\n--- Enter Student Details ---\n";
    s.getStudentData();

    cout << "\n--- Enter Teacher Details ---\n";
    t.getTeacherData();

    cout << "\n--- Student Details ---\n";
    s.showStudentData();

    cout << "\n--- Teacher Details ---\n";
    t.showTeacherData();

    return 0;
}

