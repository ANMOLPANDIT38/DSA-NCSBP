#include <iostream>
#include <cmath>
using namespace std;

int countdigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
bool ArmstrongSum(int n)
{
    int sum = 0;
    int i = n;

    int digits = countdigits(i);
    if(n==0) return true;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + (int)(pow(digit, digits));
        n=n/10;
        
    }
    return sum==i;
}

int main()
{
    int N;
    cin >> N;
    if (ArmstrongSum(N))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}