#include<iostream>
using namespace std;

void toh(int n,char src,char helper,char des){
    // BASE CASE
    if(n==0){
        return;
    }
    // recusrive case 
    // 1.ask rec to move n-1 disk from src to helper
    toh(n-1, src, des, helper );
    // 2.move nth disk from src to destionation 
    cout<<"take "<<n<<"th disk  from "<< src<<" to "<<des<<endl;

    // 3. ask rec to move n-1 disk from helper to dest
    toh(n-1,helper ,src,des);
}

int main()
{
    int n;
    cin>>n;

    toh(n,'A','B','C');

    return 0;
}