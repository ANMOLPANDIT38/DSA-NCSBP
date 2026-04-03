#include <iostream>

using namespace std;
int main()
{

    int n;
    cin >> n;
    int r, c;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            if (c == 1 || c == r || r%2!=0)
            {
                cout << "1 ";
            }
            // if(r%2!=0){
            //     cout<<"1 ";
            // }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}
