#include <iostream>
using namespace std;

class Palindrome 
{
public:
    void check() 
	{
        string word, rev = "";
        cout << "Enter a word: ";
        cin >> word;

        for (int i = word.size() - 1; i >= 0; i--) 
		{
            rev += word[i];
        }

        if (word == rev)
            cout << "Palindrome word";
        else
            cout << "Not a palindrome word";
    }
};

int main() 
{
    Palindrome obj;
    obj.check();
    return 0;
}

