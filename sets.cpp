#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> s1;
  vector<int>a = {1,4,9,9,10};
  // sorted order mai
  // unique set
  s1.insert(33);
  s1.emplace(93);
  s1.insert(23);
  s1.insert(43);
  s1.insert(53);
  s1.insert(25);
  int s = s1.count(53);
  cout << "Count of 1: " << s << endl;
  auto it = s1.find(53);
  //  cout << it << "mil gaya ";
  if (it != s1.end())
  {
    cout << *it << " mil gaya" << endl;
  }
  else
  {
    cout << "3 not found" << endl;
  }
  for (auto iter = s1.begin(); iter != s1.end(); iter++)
  {
    cout << *iter << " ";
  }
   cout << endl;
  auto lower = lower_bound(s1.begin(), s1.end(), 53);
  // find the smallest no. greater then X 
  auto upper = upper_bound(a.begin(), a.end(), 2);
//  if (lower != s1.end() )
//  {
  
//   cout << *lower << " found Index " <<endl;
//  }
//  else
//  {
//    cout << "-1";
//  }
 
  if (upper != a.end()) 
 {
   cout << *upper  << " found ";
 }
 else
 {
   cout << "-1";
 }

  // This is similar to binary search
  // lower_bound is the function which search the element of a index
  // in the set and if not found then  point the next immediate greater
  // element

   // This is similar to binary search
  // uppper_bound is the function always return next immediate greater
  // element
  return 0;
}