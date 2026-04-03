#include<iostream>
using namespace std;

void search_in_N_time(int *a ,int n ,int key){
int i;
    for( i=0;i<n;i++){
        if(a[i]==key){
            cout<<"key found "<<i<<endl;
            break;

        }
    }
    if(i==n){
        cout<<"key not found"<<endl;
    }
}

int searchOptimised(int *a,int n,int key){
    int s=0;
    int e=n-1;

    while(s<=e){
        int m=(s+e)/2;

        if(a[m]==key){
            return m;
        }
        else if(a[m]<=a[n-1]){
            // range 2 par hai mid 
            if(key>=a[m]&&key<=a[n-1]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        else{
            // i am at range 1 
            if(key>=a[0]&&key<=a[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
    }
}
int main()
{
    int a[]={11,15,18,1,3,5,8,9};
    int n=sizeof(a)/sizeof(int);
    int key=15;
    
    cout<<searchOptimised(a,n,key);
    // search_in_N_time(a,n,key);

    return 0;
}