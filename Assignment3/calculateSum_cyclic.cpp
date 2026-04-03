#include <iostream>
using namespace std;

// Array size must be large enough for N = 100,000
long long a[100005]; 

int main()
{
    int n;
    cin >> n;

    long long current_sum = 0;
    long long mod = 1000000007; // This is 10^9 + 7

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // Calculate initial sum
        current_sum = (current_sum + a[i]) % mod;
    }

    int q;
    cin >> q;

    // We must process ALL q operations
    while(q--)
    {
        int x;
        cin >> x;
        
        // The problem says: every element = itself + element X positions behind.
        // Mathematically, this ALWAYS doubles the total sum of the array.
        current_sum = (current_sum * 2) % mod;
    }

    // Output the final sum
    cout << current_sum << endl;

    return 0;
}
