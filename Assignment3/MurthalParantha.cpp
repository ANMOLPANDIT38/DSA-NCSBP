#include <iostream>
using namespace std;

bool canCook(int ranks[], int l, int p, int time) {
    int total = 0;
    
    for(int i = 0; i < l; i++) {
        int t = 0;
        int j = 1;
        
        while(true) {
            t += ranks[i] * j;
            if(t > time) break;
            total++;
            j++;
        }
        
        if(total >= p) return true;
    }
    
    return false;
}

int main() {
    int p, l;
    cin >> p;
    cin >> l;
    
    int ranks[50];
    for(int i = 0; i < l; i++) {
        cin >> ranks[i];
    }
    
    int low = 0, high = 1000000, ans = 0;
    
    while(low <= high) {
        int mid = (low + high) / 2;
        
        if(canCook(ranks, l, p, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    cout << ans;
    
    return 0;
}