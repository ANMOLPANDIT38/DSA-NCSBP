#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cin >> n;

    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= r)
        {
            cout << t1 << "    ";
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;

            c++;
        }

        cout << endl;
        r++;
    }

    return 0;
}
