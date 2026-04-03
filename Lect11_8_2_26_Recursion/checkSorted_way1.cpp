#include <iostream>
using namespace std;

bool checkSorted(int *a, int n) {
    // base case 
	if (n == 1) {
		return true;
	}

    // recursive case
	bool chotaArraySorted = checkSorted(a + 1, n - 1);
	if (chotaArraySorted == true && a[0] <= a[1]) {
		return true;
	}

	return false;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (checkSorted(a, n)) {
		cout << "Sorted\n";
	}
	else {
		cout << "Not Sorted\n";
	}

	return 0;
}















