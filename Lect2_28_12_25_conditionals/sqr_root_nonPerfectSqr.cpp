#include <iostream>
using namespace std;

int main()
{
    // add float inc varibale and i replacte by ans variable
    //
    int n;
    cin >> n;
    float ans = 0;
    float inc = 1;
    int i = 1;
    //3 bta rha hai kitne precision tk chaiye value ...
    //agr 3 hai tho  (._ _) 2 tk value dega ....
    //agr 2 hai tho 1 value dega point(._) ke baad...
    while (i <= 3) 
    {
        while (ans * ans <= n)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc / 10;
        // cout<<inc<<endl;
        i++;
    }
    cout << ans << endl;

    /*
    int n;
    cin>>n;
    int i=0;
    while(i*i<=n){
        i=i+1;
    }
    i--;
    cout<<i<<endl;*/

    return 0;
}