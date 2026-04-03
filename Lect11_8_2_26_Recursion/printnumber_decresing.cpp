#include <iostream>
using namespace std;

// print decreasing

void printinc(int n)
{
    // base case
    if (n == 0)
        return;
    // recursive case
    cout << n << " ";
    printinc(n - 1);
}

int main()
{
    printinc(5);

    return 0;
}