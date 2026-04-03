#include<iostream>
using namespace std;
int main()
{
    int a[100][100];

    // 2d user input
    // no. of row,cols
    int n,m;
    cin>>n>>m;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}