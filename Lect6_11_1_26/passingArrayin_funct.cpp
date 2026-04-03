#include <iostream>
using namespace std;
//yha par aarya ka size dena hai ya nhi that is optional
//int a[] size nhi diya
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];

    }
    cout<<endl;
}
int main(){
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //array ke case mei hum array ka name and number of buckets donot pass karte hai
    print(a,n);
    return 0;
}