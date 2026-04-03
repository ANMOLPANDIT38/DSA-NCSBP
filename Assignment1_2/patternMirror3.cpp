#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int nd=((n+1)/2);
    int r ,c;
    for (r=1;r<=nd;r++){
        if(r==1){
            //1. print nd-r times spaces
            for(c=1;c<=nd-r;c++){
            cout<<" ";
            }
            //2.print "*"
            cout<<"*";
        }
        else{
            //1. print nd-r times spaces
             for(c=1;c<=nd-r;c++){
            cout<<" ";
            }
            //2.print "*"
            cout<<"*";

            //3. print 2r-3 times spaces
            for(c=1;c<=2*r-3;c++){
                cout<<" ";
            }

            //4.print "*"
            cout<<"*";

        }
        cout<<endl;
    }

    //mirror
    for (r=nd-1;r>=1;r--){
        if(r==1){
            //1. print nd-r times spaces
            for(c=1;c<=nd-r;c++){
            cout<<" ";
            }
            //2.print "*"
            cout<<"*";
        }
        else{
            //1. print nd-r times spaces
             for(c=1;c<=nd-r;c++){
            cout<<" ";
            }
            //2.print "*"
            cout<<"*";

            //3. print 2r-3 times spaces
            for(c=1;c<=2*r-3;c++){
                cout<<" ";
            }

            //4.print "*"
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}