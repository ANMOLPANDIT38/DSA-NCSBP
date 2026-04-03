
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

void search(int a[][100],int n ,int m,int key){
    // top right corner 
    int i=0;
    int j=m-1;
    while(i<n and j>=0){
        if(a[i][j]==key){
            cout<<key<<" "<<i<<" "<<j<<endl;
            return;
        }
        else if(a[i][j]<key){
            i++;
        }
        else{
            j--;
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
    int key;
    cin>>key;

	search(a,n,m,key);

    return 0;
}
