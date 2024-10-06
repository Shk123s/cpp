#include <bits/stdc++.h>
using namespace std;
//  will change the parameter by using pointers 
int add(int *x,int *y)
{
   int temp ;
   temp = *x;
   *x =*y;
   *y= temp;
  return 0;
}
int main()
{ 
  int a=10,b=20 ;
   add(&a,&b);
 
  cout << "The first  is " << a;
  cout << "The second is " << b;
  
    return 0;
    
}   