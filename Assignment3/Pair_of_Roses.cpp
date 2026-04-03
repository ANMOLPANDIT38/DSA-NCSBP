#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    // Number of test cases read karte hain
    if (!(cin >> t)) return 0;

    // t ke liye for loop
    for (int count = 0; count < t; count++) {
        int n;
        cin >> n;

        int a[10000]; // Normal array as per your original code
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int target;
        cin >> target;

        // Sorting zaroori hai two-pointer ke liye
        sort(a, a + n);

        int price1 = 0, price2 = 0;
        int left = 0;      // Sabse choti value se start
        int right = n - 1; // Sabse badi value se start

        while (left < right) {
            int current_sum = a[left] + a[right];
            
            if (current_sum == target) {
                // Jab bhi target milega, save kar lo
                // Kyunki pointers center ki taraf badh rahe hain, 
                // toh last wala pair hi sabse kam difference wala hoga.
                price1 = a[left];
                price2 = a[right];
                left++;
                right--;
            } 
            else if (current_sum < target) {
                left++; // Sum badhane ke liye left pointer aage karo
            } 
            else {
                right--; // Sum ghatane ke liye right pointer peeche karo
            }
        }

        cout << "Deepak should buy roses whose prices are " << price1 << " and " << price2 << "." << endl;
        // Blank line har test case ke baad
        cout << endl;
    }

    return 0;
}
