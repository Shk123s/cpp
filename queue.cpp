#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int>q1;

  q1.push(20);
  q1.push(10);
  q1.push(30);
  q1.push(80);

  while (!q1.empty())
  {
    cout << q1.front() <<endl;
    // cout << q1.back();
      q1.pop();
  }
  
 
   
    return 0;
}   