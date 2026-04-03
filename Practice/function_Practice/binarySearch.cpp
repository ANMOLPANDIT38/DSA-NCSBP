#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    // yh likhna bhul jata hu 
    
    return -1;

}
int main()
{
    int a[]={3,4,5,6,8,9};
    int n=sizeof(a)/sizeof(int);
    int key=5;
    cout<<binarySearch(a,n,key);
    return 0;
}