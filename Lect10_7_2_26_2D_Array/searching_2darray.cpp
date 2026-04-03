
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
    for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(a[i][j]==key){
                cout<<key<<"found"<<" "<<i<<" "<<j<<endl;
                // agr return likhoge tab ek hi vlaue lekr bhar ho jaoge 
                //nhi likhoge tho sare value print hogi
                //return-->(function se wpas chle jao) 
                return;
            }
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
    int key;
    cin>>key;

	search(a,n,m,key);

    return 0;
}
