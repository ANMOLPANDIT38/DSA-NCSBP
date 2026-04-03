#include <iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mi]){
                mi=j;  
            }
        }
        swap(a[i],a[mi]);

    }
}
int main(){
    int a[1000];
    int n;
    cout<<"enter how many numbers :"<<" ";
    cin>>n;
    int i,j;

    // input value lena hai for using loop
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    selectionSort(a,n);

    cout<<"sorted array :  ";
    print(a,n);

    return 0;

}