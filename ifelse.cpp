#include <bits/stdc++.h>
using namespace std;
int main()
{     //if else school wala problem sovle krna h
   int marks;
   cin >> marks;
   if (marks < 25)
   {
    cout << "Your grade is : F" ;
   }
   else if(marks <= 44)
   {
     cout << "E" ;
   }
    else if(marks <= 49)
   {
     cout << "D" ;
   }
   else if(marks <= 59)
   {
     cout << "C" ;
   }
   else if(marks <= 79)
   {
     cout << "B" ;
   } else if(marks <= 100)
   {
     cout << "A" ;
   }
 
 
    return 0;
}