#include <bits/stdc++.h>
using namespace std;

class A
{
private: 
  int weight;
public: 
  A (int x = 0)
  {
    weight = x;

  }
  void print()
   {
     cout << " wieght  " << weight ;
   }
  A operator+(A w)
  {
     A temp;
     temp.weight = weight + w.weight;
    return temp; 
  }

};

int main()
{ 
  int a = 34 ,b = 56, c = 0;
  c = a + b ;
  cout << "  total wieght with built in data types:  " << c << endl ;
  A person(89);
  A person2(11);
  A total ;
  total = person + person2;
  total.print();
  return 0;
}