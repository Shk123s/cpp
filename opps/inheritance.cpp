#include <bits/stdc++.h>
using namespace std;

class rectangle
{
public: 
  int length,breadth;

  void print()
   {
     cout << "Area of rectangle is : " << length * breadth <<endl ;
   }

};
class cuboid: public rectangle
{
public: 
  int height;

  void printcuboid()
   {
     cout << "Volume of cuboid is : " << length * breadth * height ;
   }

};

int main()
{  
  rectangle r;
  r.length = 10 ;
  r.breadth = 10 ;
  r.print();
  cuboid h;
  // inheriting from base class 
   h.length = 10 ;
   h.breadth = 10 ;
   h.height = 10;
   h.printcuboid();
  return 0;
}