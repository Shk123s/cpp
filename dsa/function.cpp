#include <bits/stdc++.h>
using namespace std;
//  normal or pass by value the paramerter wont change 
int add(int num,int num1)
{
   int c ;
   c = num + num1;
   return c; 
}
int main()
{ 
  int num=10,num1=20 ,sum;
   sum = add(num,num1);
  cout << "The sum is " << sum;
  cout << "The first  is " << sum;
  cout << "The second is " << sum;
  
    return 0;
    
}   