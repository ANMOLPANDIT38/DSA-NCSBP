#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout << "enter a character alphabet: " << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "character is upper case " << endl;
    }
    else
    {
        cout << "character is lower case " << endl;
    }

    return 0;
}