#include <iostream>
#include <algorithm>
using namespace std;

int  lcm(int N1, int N2)
{
     int i = max(N1, N2);
     while (i>1)
     {
          if (i % N1 == 0 && i % N2 == 0)
          {
               return i;
          }
          i++;
     }
     return 0;
}

int main()
{

     int n1;
     cin >> n1;
     int n2;
     cin >> n2;
     cout << lcm(n1, n2);

     return 0;
}