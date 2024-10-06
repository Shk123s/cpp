#include <bits/stdc++.h>
using namespace std;

int main()
{
 int arr[6] = { 120,32,334,338,336,39};
 priority_queue<int>pq;
 for(auto i= 0;i < 6  ;i++)
 { 
  pq.push(arr[i]);
 
 }

 while(!pq.empty())
 {
  cout << pq.top() << " ";
  pq.pop();
 }



  
 
   
    return 0;
}   