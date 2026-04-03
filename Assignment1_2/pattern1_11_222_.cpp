
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int r = 1;
    int c;
    while (r <= n)
    {
        if (r == 1)
        {
            cout << "1 ";
        }
        else
        {
            c = 1;
            while (c <= r)
            {
                if (c == 1 || r == c)
                {
                    cout << r - 1;
                }
                else
                {
                    cout << "0";
                }
                c++;
            }
        }
        cout << endl;

        r++;
    }

    return 0;
}