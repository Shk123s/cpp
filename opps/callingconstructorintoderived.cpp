#include <bits/stdc++.h>
using namespace std;

class base
{

public: 
  base ()
  {
   cout << "This is default constructor of base class: " <<endl;

  }
  base (int x )
  {
 
    cout << "This is parameterized constructor of base class " << x << endl;

  }
};
class derived:public base
{
 public:
    derived ():base()
  {
   cout << "This is default constructor of derived class: " <<endl;

  }
  derived (int x ):base(x)
  {
 
    cout << "This is parameterized constructor of derived class " << x << endl;

  }
};
int main()
{ 
  // we can call  base class of the default constructor only 
  // we cant call base class of the paramitized constructor .
  // every time base class of the default constructor called . 
  // derived af;
  // derived a2(23);
  //  but changing the class of the  derived (int x ):base(x)
  // it called to the base class ,
  // so it will call base of para and print para of base and para of derived class
  //  derived af;
  // This is default constructor of base class: 
  // This is default constructor of derived class: 
  derived a2(23);
  // This is parameterized constructor of base class 23
  // This is parameterized constructor of derived class 23

  return 0;
}