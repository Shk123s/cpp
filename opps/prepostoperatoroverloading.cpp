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
  void operator++ ()
  {
    ++weight;
    
  }
  void operator++ (int)
  {
    weight++;
    
  }

};

int main()
{ //this pre overloading 
  A person(56);
  ++person;
  //this is pos operator overloading
  person++;
  person.print();
  return 0;
}