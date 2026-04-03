#include <iostream>
using namespace std;

void subsequence(char *ip, int i, char *op, int j)
{
	// base case
	if (ip[i] == '\0')
	{
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// recursive case
	// 1. include ith charracter into jth position
	// copy kar rhe hai 
	op[j] = ip[i];
	subsequence(ip, i + 1, op, j + 1);
	// 2. excludde ith charracter into jth position
	subsequence(ip, i + 1, op, j);
}

int main()

{
	char ip[] = "abc";
	char op[100];

	subsequence(ip, 0, op, 0);
	return 0;
}
