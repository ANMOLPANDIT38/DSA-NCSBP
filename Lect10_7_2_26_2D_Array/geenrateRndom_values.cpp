#include<iostream>
using namespace std;
int main()
{
    int a[100][100];

	int number = 1;
	int n, m;
	cin >> n >> m; // n: no of rows, m: no of cols

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
        //rand function padhan hai ek baar 
		{ // rnage of values 1 to 100 in between 
			a[i][j] = rand() % 100 + 1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}


    return 0;
}