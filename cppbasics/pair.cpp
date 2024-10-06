#include <bits/stdc++.h>
using namespace std;
//array mai loop and function pass by value .
int main()
{  
     vector<pair<int, int>> vec;

    // Initializing pairs and adding them to the vector
    vec.push_back(make_pair(33, 12));
    vec.push_back(make_pair(3, 4));


         // Sorting the vector of pairs
    sort(vec.begin(), vec.end());

    // Printing the vector after sorting
    cout << "After sorting:" << endl;
    for (const auto &p : vec) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    // p3 = make_pair(123,444);
    // p1.swap(p3);
    // cout << p1.first << " "; 
    // cout << p1.second << " "; 
    
    // cout << p1.second.first << " "; 
    // cout << p1.second.second << " "; 
    // cout << p3.first << " "; 
    // cout << p3.first << " "; 
    // cout << p3.second << " "; 


 

    return 0;
}   