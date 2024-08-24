#include <bits/stdc++.h>
using namespace std;
//virtual fucntion 
class base 
{ 
public :
 //virtual by adding this keyword
  virtual void  show()
  {
     cout << "hello tum mast ho base class :" << endl;
  }

};
class derived:public base 
{
   void show()
   {
    cout << "hello tum bhi mast ho derived class :" << endl;
   }
}; 
class derived2:public base 
{
   void show()
   {
    cout << "hello tum bhi mast ho derived2 class :" << endl;
   }
} ;
int main()
{ 
 // we are creating pointer thats point to base class only .insipte of creating 
 // object of new derived class or new derived2 class .
 // how to solve this problem.
 // by adding this keyword virtual.
 // virtual function made the base of function virtual it is visible but not exist ,made by complier
 // pointer points to respectively of the classess member function.
 // reason:
 //complier deferr the decision untill the program is runing 
 // and at runtime when it come to know which class is pointed by ptr 
 // then appropirate function would be called .
 // this function is called dynamic/late binding .
 // let see bun example in bunvf file 

  base *ptr;
  ptr = new derived();
  ptr->show();
 
  ptr = new derived2();
  ptr->show();

  return 0;
}