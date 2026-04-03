#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {2, 2, 1, 1, 2};

    int candidate = 0;
    int count = 0;

    // Sirf EK loop (O(n))
    for (int i = 0; i < n; i++) {
        // 1. Agar count 0 hai, toh naya candidate chun lo
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
        // 2. Agar wahi candidate dobara dikha, toh vote badhao
        else if (arr[i] == candidate) {
            count++;
        }
        // 3. Agar koi aur dikha, toh vote kam karo (Ladayi!)
        else {
            count--;
        }
    }

    // Jo end mein bacha, wahi majority hai
    cout <<candidate << endl;

    return 0;
}
