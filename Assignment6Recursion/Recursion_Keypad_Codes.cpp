#include <iostream>
using namespace std;

string keypad[] = {
    "",     
    "abc",  
    "def",  
    "ghi",  
    "jkl",  
    "mno",  
    "pqrs", 
    "tuv",  
    "wx",   
    "yz"    
};

int countWays(string str, int i) {
    if (i == str.length()) return 1;

    int digit = str[i] - '0';
    int count = 0;

    for (char ch : keypad[digit]) {
        count += countWays(str, i + 1);
    }

    return count;
}

void printWays(string str, int i, string path) {
    if (i == str.length()) {
        cout << path << " ";
        return;
    }

    int digit = str[i] - '0';

    for (char ch : keypad[digit]) {
        printWays(str, i + 1, path + ch);
    }
}

int main() {
    string str;
    cin >> str;

    printWays(str, 0, "");
    cout << endl;

    cout << countWays(str, 0);

    return 0;
}