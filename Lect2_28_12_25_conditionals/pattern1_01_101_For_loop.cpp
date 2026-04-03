#include <iostream>
using namespace std;
int main(){
int n, no;
    cin >> n;
    //n times loop chlao
    for (int r = 1; r <= n; r++)
    {   //even line m 0print kro
        if (r % 2 == 0)
        {
            no = 0;
        }
        else//odd line m 1 print karo
        {
            no = 1;
        }
        //row times print karo
        for (int i = 1; i <= r; i++)
        {
            cout << no << " ";
            // logic this if no =0 then 1-0=0
            // other wise if no=1 then no=0
            no = 1 - no;
        }
    
        cout << endl;
    }
    return 0;
}    