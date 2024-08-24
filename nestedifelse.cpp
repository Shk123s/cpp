#include <bits/stdc++.h>
using namespace std;
int main()
{     //if else school wala problem sovle krna h
   int age;
   cin >> age;

   if (age < 18)
   {
     cout << "not  eligible for job";
   }
   else if (age <= 57)
   { 
     cout << "eligible for job";
    if (age >= 55)
    {
      cout << ", but retirement soon";

    }
   }
   else 
    {
       cout << "retirement time";
    }
 

 
    return 0;
}