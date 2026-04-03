
#include<iostream>
using namespace std;

void print(int a[][100],int n ,int m){
    for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
int main()
{
    int n = 3, m = 3;
	// int a[100][100] = {
	int a[][100] = {// Mentioning rows is optional
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	print (a,n,m);

    return 0;
}
