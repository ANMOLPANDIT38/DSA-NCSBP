#include <iostream>
using namespace std;


void printtable(int init,int fval,int step){
    int f = init;
    while (f <= fval)
    {
        int c = (5 / 9.0) * (f - 32);
        cout << f << " " << c << endl;
        f = f + step;
    }
}
int main()
{

    int init, fval, step;
    cin >> init >> fval >> step;
    // formula -> c=(f-32)*(5/9);
    printtable(init,fval,step);


    /*
    int init,fin,step;
   cout<<"enter a intial value "<<endl;
   cout<<"enter a final value "<<endl;
   cout<<"enter a step value "<<endl;
   cin>>init;
   cin>>fin;
   cin>>step;
   
   int c=0;
   

   while(init<=fin){
    c = (5/9.0) * (init - 32);
    cout<<init<<" "<<c<<endl;
    init=init+step;
   }*/
    return 0;
}