#include <iostream>
using namespace std;

int  sumArray(int *a, int n) {
    // base case 
    int i;
	if (n == 0) {
		return 0;
	}

    // recursive case
	return a[0]+ sumArray(a+1,n-1);
}

int main() {

	int a[1000];
	int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	cout<<sumArray(a, n);
	

	return 0;
}


