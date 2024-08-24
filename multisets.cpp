#include <bits/stdc++.h>
using namespace std;

int main()
{
  //insert in order 
  // but not  unique 
  //can erase single and multiple elements 
 multiset<int>multiset1 ;
 multiset1.insert(1);
 multiset1.insert(1);
 multiset1.insert(1);
 multiset1.insert(3);
 multiset1.insert(5);
 multiset1.insert(35);
//  count the element 
 int cn = multiset1.count(1);
 cout << cn ;
//  multiset1.erase(1);
// will erase only single element .
  auto it = multiset1.find(1);
    if (it != multiset1.end())
    {
        multiset1.erase(it);
        cout << " " ;
    }


for (auto i = multiset1.begin(); i != multiset1.end() ; i++)
{
  cout << *i << " " ;
}

  return 0;
}