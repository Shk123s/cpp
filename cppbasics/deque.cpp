#include <bits/stdc++.h>
using namespace std;

int main()
{
  deque<int>d1;

  d1.push_back(2);
  d1.push_back(20);
  d1.push_back(222);
  d1.push_front(10);
  d1.pop_back();
  d1.pop_front(); 
 for (auto it = d1.begin(); it != d1.end() ; it++)
 {
  cout << *it << endl;
 }
 
   
    return 0;
}   