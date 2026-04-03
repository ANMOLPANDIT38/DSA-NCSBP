#include <iostream>
using namespace std;

void print(int arr[][100], int n, int m) {

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}


void spiralPrint(int a[][100], int n, int m) {
	int sr = 0, er = n - 1, sc = 0, ec = m - 1;

	while (sr <= er and sc <= ec) {
		// 1. Print sr from [sc, ec]
		// row ke liye column print karna hai 
		for (int col = sc; col <= ec; ++col)
		{
			// starting row same ,column change ho rhah hai
			cout << a[sr][col] << " ";
		}
		// next row m jaa rhe hia 
		sr++;

		// 2. Print ec from [sr, er]
		// column ke liye row print kar rhe hai 
		for (int row = sr ; row <= er ; row ++) {

			// end cloumn print kar rhe hai
			cout << a[row][ec] << ' ';
		}
		// end column minus kar diya -->phiche chle gye 
		ec--;

		// ab niche ke reverse order m print honge upar wale simple print ho rhe hthe
		if (sr < er) {
			// 3. Print er from [ec, sc]
			for (int col = ec ; col >= sc ; col--) {
				cout << a[er][col] << " ";
			}
			er--;
		}
		if (sc < ec) {
			// 4. Print sc from [er, sr]
			for (int row = er ; row >= sr ; row--) {
				cout << a[row][sc] << " ";
			}
			sc++;
		}
	}


	cout << endl;
}

int main() {
	int a[100][100];
	int number = 1;
	int n, m;
	cin >> n >> m; // n: no of rows, m: no of cols

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number;
			number ++;
		}
	}

	print(a, n, m);

	spiralPrint(a, n, m);

	return 0;
}















