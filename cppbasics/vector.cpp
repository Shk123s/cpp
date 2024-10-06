#include <bits/stdc++.h>
using namespace std;
//array mai loop and function pass by value .
int main()
{  
   vector<int> num = { 1,2,3,4,50};
   vector<int>::iterator iter1;

// num.erase(num.begin()); 
 num.insert(num.begin() ,num.begin(),num.end());
//  iter1 = num.begin() + 2;
//  cout << iter1[0]  << " "<< *iter1;

//  iter1 = num.end()- 1;
//  cout << " " << *iter1; 
 for (iter1 = num.begin(); iter1 != num.end(); ++iter1)
 {
 cout << " " << *iter1; 
 }
 
//    num.at(4) = 3 ;
//    num.pop_back();
//   cout << num.size() << endl;
//    vector<int> num1(5,12);
//   for (int i = 0; i < num.size(); i++)
//   {
//    cout << num[i] << " " <<endl;   
//   }
//   num1.push_back(16);
//    for (int i = 0; i < num1.size(); i++)
//   {
//    cout << num1[i] << " " <<endl;   
//   }

 

    return 0;
}   