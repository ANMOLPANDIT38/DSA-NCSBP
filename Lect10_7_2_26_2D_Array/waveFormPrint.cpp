
#include<iostream>
using namespace std;

void print(int a[][100],int n ,int m){
    for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout << endl;
	}
}

void waveprint(int a[][100],int n, int m){
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<a[i][j]<<" ";

            }
        }
    }
}


int main()
{
    int n = 4, m = 4;
	// int a[100][100] = {
	int a[][100] = {// Mentioning rows is optional
		{1, 2, 3,10},
		{4, 5, 12,18},
		{6,13,15,20},
        {9,14,22,25}
	};
    print (a,n,m);

	waveprint(a,n,m);

    return 0;
}
