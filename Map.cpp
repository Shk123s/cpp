#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  // stores unique key 
  // key value pairs like object and sorted array 
   map<string, int> mp;
 
    // Insert some values into the map
    mp["one"] = 12;
    mp["two"] = 22;
    mp["three"] = 32;
 
    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = mp.begin();
 
    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
 
map<int,int>mapp ;
 mapp.insert({1,3});

 for (auto it : mapp)
 {
   cout << it.first  << " " << it.second  <;
 }
 
  return 0;
}