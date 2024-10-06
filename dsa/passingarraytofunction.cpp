#include <bits/stdc++.h>
using namespace std;

 
int * func (int A [],int size )
  
{    
    //  cout << A[0] << A[1] << A[2];
        A[0] = 1;
  for ( int i = 0; i < size; i++)
  {
      cout << A[i] << " " ;
  }
   return 0;
}
int main()
{     
    // takes 4 bytee each element of an array. 
       int A[] = {2,3,4 };
       // int n = 6;
       int n = sizeof(A) / sizeof(A[0]);
     func(A,n);

     cout << endl << "neeche ka loop h";
     for(int X:A)
     cout << endl << X << " ";

  
    return 0;
    
}   