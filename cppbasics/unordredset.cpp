#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  // stored in the unordered in unique value 
  //lower bound and upper bound does not work 
  // rest all same better complexity then set 
 unordered_set<int>uset1;

 uset1.insert(1);
 uset1.insert(12);
 uset1.insert(113);
 uset1.insert(31);
 

 for (auto i = uset1.begin(); i != uset1.end(); i++)
 {
  cout << *i  << " ";
 }
 
  return 0;
}