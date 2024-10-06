#include <bits/stdc++.h>
using namespace std;


 void function3 (int n){

  if(n >0){
    cout << n;
    function3(n -1);
  }
}

int main()
{     

  int n = 3 ;
 function3(n);
 
    return 0;
    
}   