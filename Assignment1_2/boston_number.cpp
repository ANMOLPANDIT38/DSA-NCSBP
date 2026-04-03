#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int copy_n = n;
    int ans_digit = 0;
    int ld;

    while (n > 0)
    {
        ld = n % 10;
        ans_digit += ld;
        n /= 10;
    }

    n = copy_n;
    int factor_digitsum = 0;
    int x = 2;

    while (n >= x)
    {
        while (n % x == 0)
        {
            int y = x;
            while (y > 0)
            {
                ld = y % 10;
                factor_digitsum += ld; // FIXED
                y /= 10;
            }
            n /= x;
        }
        x++;
    }

    cout << (factor_digitsum == ans_digit);

    return 0;
}