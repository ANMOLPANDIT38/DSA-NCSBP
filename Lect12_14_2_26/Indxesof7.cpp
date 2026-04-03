#include<iostream>
using namespace std;

bool check7(int* a,int n,int i){
    if(i==n) return false;

    if(a[i]==7) return true;

    return check7(a,n,i+1);
}

int first7(int* a,int n,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==7){
        return i;
    }
    return first7(a,n,i+1);
}

int last7(int* a,int n,int i){
    if(i<0){
        return 0;
    }
    if(a[i]==7){
        return i;
    }
    return last7(a,n,i-1);
}

void all7(int* a,int n,int i){

    if(i==n){
        return ;
    }
    if(a[i]==7){
        cout<<i<<" ";
         
    }
    all7(a,n,i+1);

}
int main()
{
    int a[]={1,2,7,4,7,7,5};
    int n=sizeof(a)/sizeof(int );

    if((check7(a,n,0)) ==true){
        cout<<"7 found"<<endl;
    }
    else{
        cout<<" 7 not found"<<endl;
    }

    cout<<first7(a,n,0)<<endl;
    cout<<last7(a,n,n-1)<<endl;
    all7(a,n,0);
    
    return 0;
}