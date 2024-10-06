#include <bits/stdc++.h>
using namespace std;


 int  function3 (int n){

  if(n > 0){
    cout  << n <<"," ;
    function3(n - 1);
    function3(n - 1);
  }
  return 0;
}
 
int main()
{     

   int a ;
   a = function3(3);
 
    return 0;
    
}   