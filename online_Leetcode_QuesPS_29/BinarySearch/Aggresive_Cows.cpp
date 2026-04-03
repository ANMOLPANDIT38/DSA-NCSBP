#include<iostream>
#include <algorithm>
using namespace std;
#define ll long long 

ll a[100005];
ll totalcows;
ll n;

bool isPossible(int mid ){
    ll cowsPlaced=1;
    int x=0; //place the first cow on 0th index stall position 
    for(int i=1;i<n;i++){
        if(a[i]-a[x]>=mid){
            cowsPlaced++;
            x=i;
        }
        if(cowsPlaced==totalcows) return true;
    }
    // this means cows placed nhi kar payee 
    //-->thismeans  mid is not valid for placing cows 
    return false;
}
ll solve(){
    ll s=0;
    ll e= a[n-1]-a[0];
    // [s,e]--> is called search space  of binary search algorithm 
    ll ans;
    while(s<=e){
        ll mid=(s+e)/2;

        if(isPossible(mid)==true){
            ans=mid;
            s=mid+1;
        }
        else e= mid-1;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>n>>totalcows;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n); // sort tha stalls array first 
        // no need  to pass any parameter becoz all things globally
        cout<<solve()<<endl;
    }

    return 0;
}