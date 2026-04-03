#include<iostream>
using namespace std;
int main()
{

    int rows,cols;
    cin>>rows>>cols;
    // pointer ka adress store karnane ke liye int double star int **
    int **a=new int*[rows];
    // pointer m null daal rhe hai
    for(int i=0;i<rows;i++){
        a[i]=NULL;

    }
    for(int i=0;i<rows;i++){
        a[i]=new int[cols];
    }
    int number=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            a[i][j]=number++;
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // free the memory
    for(int i=0;i<rows;i++){
        delete[]a[i];
    }
    delete[]a;
    a=NULL;



    return 0;
}