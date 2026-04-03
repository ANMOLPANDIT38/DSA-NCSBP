#include <iostream>
using namespace std;
int main()
{

   char ch;
   ch = cin.get(); // INITALISATION
   int cnt = 0;
   while (ch != '$')
   { // CONDTION CHECK
      cnt++;

      ch = cin.get(); // updation  and cin.get to include whitespaces also
   }
   cout << cnt;

   return 0;
}