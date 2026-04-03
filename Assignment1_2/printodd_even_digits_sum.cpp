#include <iostream>
using namespace std;

int countdigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main(){

    int n;
    cin>>n;
    int sum = 0;
    int ld;
    int count=0;
    int sum1=0;
    while (n > 0)
    {
        if(count%2==0){
            ld = n % 10;
            sum = sum + ld;
            count++;
            n /= 10;
        }
        else{
            ld = n % 10;
            sum1 = sum1 + ld;
            
            count++;
            n /= 10;
        }
        
        
    }
    cout<<sum<<endl;
    cout << sum1<<endl;

    
    
    
}