#include <iostream>
using namespace std;
int main()
{

    int n, ld;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        ld = n % 10;
        ans = ans * 10 + ld;
        n = n / 10;
    }
    cout << ans;

    /*
    int n;
    cin >> n;
    // initiali value yh sab hai iske liye
    int i;
    int ans = 0;
    int ld;
    // isliye for loop m nhi likha
    for (; n > 0; n = n / 10)
    {
        ld = n % 10;
        ans = ans * 10 + ld;
    }
    cout << ans;*/

    return 0;
}