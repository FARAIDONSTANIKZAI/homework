#include <iostream>
using namespace std;

int main()
{
   int f1=1, f2=1, f3=1 ;
   cout <<"Fibonacci Series:  "  ;
   cout <<f3 <<"  " ;     // Prints the first number 
   while (f3<1000)
   {f1=f2;
   f2=f3;
   cout <<f3 << "  " ;
   f3=f1+f2 ;
   }
    
    return 0;
}

