#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    n;
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {2, 3, 45, 6, 7};
    int n = sizeof(a) / sizeof(int);
    int key;
    cout << binarySearch(a, n, 7);

    return 0;
}