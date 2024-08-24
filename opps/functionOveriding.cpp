#include <bits/stdc++.h>
using namespace std;

class base
{

public: 
  void Msg()
  {
    cout << " Print message of base class " << endl;
  }
};
class derived:public base
{
 public:
  
 void Msg()
  { 
    cout << "Print message of derived class" << endl ;
    base::Msg();//calling
  }
};
int main()
{ 
  // function overiding 
  // redefining of fuctionality from base class 
  // into derived class then if we create object of derived class 
  // base s;
  // s.Msg();
  derived b;
  b.Msg();
 

  return 0;
}