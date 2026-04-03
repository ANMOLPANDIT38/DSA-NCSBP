#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[1000];
        int total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_sum += a[i];
        }

        // Normal Kadane (Maximum Subarray)
        int curr_max = a[0], max_sum = a[0];
        for (int i = 1; i < n; i++)
        {
            curr_max = max(a[i], curr_max + a[i]);
            max_sum = max(max_sum, curr_max);
        }

        // Minimum Subarray (for circular case)
        int curr_min = a[0], min_sum = a[0];
        for (int i = 1; i < n; i++)
        {
            curr_min = min(a[i], curr_min + a[i]);
            min_sum = min(min_sum, curr_min);
        }

        // If all elements are negative
        if (max_sum < 0)
        {
            cout << max_sum << endl;
        }
        else
        {
            cout << max(max_sum, total_sum - min_sum) << endl;
        }
    }

    return 0;
}