#include <bits/stdc++.h>
using namespace std;

 //let declare int x = 0  as global variable 
  int x = 0 ;
 int  function3 (int n){

  if(n > 0){
    x++;
   return function3(n - 1) + x;
  }
  return 0;
}
 
int main()
{     

   int a ;
   a = function3(5);
   cout <<  a;
 
    return 0;
    
}   