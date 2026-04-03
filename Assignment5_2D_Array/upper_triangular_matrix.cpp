#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // diaognal ke liye yh nhi lga payaa

                if (i > j)
                {
                    cout << "0 ";
                }
                else{
                    cout<<a[i][j]<<" ";
                }
                
            }
            cout<<endl;
        }
    

    return 0;
}