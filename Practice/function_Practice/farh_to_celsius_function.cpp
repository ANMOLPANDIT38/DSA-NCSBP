#include <iostream>
using namespace std;

void printTable(int init,int fval,int step){
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
    printTable(init,fval,step);

    return 0;
}