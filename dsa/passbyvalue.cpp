#include <bits/stdc++.h>
using namespace std;
//  normal or pass by value the paramerter wont change 
int add(int x,int y)
{
   int temp ;
   temp = x;
   x =y;
   y= temp;
  return 0;
}
int main()
{ 
  int a=10,b=20 ;
   add(a,b);
 
  cout << "The first  is " << a;
  cout << "The second is " << b;
  
    return 0;
    
}   