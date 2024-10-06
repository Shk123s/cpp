#include <bits/stdc++.h>
using namespace std;
//  will also change the parameter by reference not pointers poiterns using memory it is using variable name or alias of the 
// existing variable  
int add(int  &x,int &y)
{
   int temp ;
   temp = x;
   x = y;
   y= temp;
  return 0;
}
int main()
{ 
  int a=10,b=20 ;
   add(a,b);
 
  cout << "The first  is " << a;
  cout << " The second is " << b;
  
    return 0;
    
}   