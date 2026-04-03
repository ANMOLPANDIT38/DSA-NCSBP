#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int person = 0;
    int vote = 0;
    int current;

    for (int i = 0; i < n; i++) {
        cin >> current;
        if (vote == 0) {
            person = current;
            vote = 1;
        } else if (current == person) {
            vote++;
        } else {
            vote--;
        }
    }

    cout << person << endl;

    return 0;
}
