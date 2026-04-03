#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int r = 1; 
    while (r <= n) {
        int val = 1; // The first number in every row is always 1
        int c = 1;
        while (c <= r) {
            cout << val << "    ";
            
            // Calculate the next value in the row based on the current one
            // Using (val * (row - column) / column)
            val = val * (r - c) / c;
            
            c++;
        }
        cout << endl;
        r++;
    }
    return 0;
}
