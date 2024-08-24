#include <bits/stdc++.h>
using namespace std;

int main()
{
   list<int> list1;

   list1.emplace_front(3);
   list1.emplace_front(5);
   list1.emplace_back(44);
   list1.push_back(33);
   list1.push_front(22);
   list1.reverse();
   list1.sort();
  //  list1.pop_back();

   for (auto i = list1.begin(); i != list1.end(); i++)
   {
    cout << *i << " ";
   }
   
    return 0;
}   