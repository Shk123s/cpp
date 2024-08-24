#include <bits/stdc++.h>
using namespace std;
//virtual fucntion 
class person 
{ 
public :
  //abstract 
 // by adding 0 and removing body and his object is never created 
 // become pure  virtual function. 
 // it known as polymorphism poly means many something existing in  more than 
 // one form 
 // one function exists in different form, and 
 //  performing different accordingly to input 
 //ptr points to give function accordinly to input will give output 
 // this is run time  polymorphism where while runnig the code then it will decide which classs or object points which class 
//  virtual fncton and function overriding one function is riden by base class
 // compile time polymorphism where operator and function overloading 
 // opertor overloaded to perform different tasks same for function 
  virtual void  give() = 0;


};
class boy:public person 
{ 
    public : 
   void give()
   {
    cout << " brown bun" << endl;
   }
}; 
class girl:public person 
{
    public :
   void give()
   {
    cout << "pink bun" << endl;
   }
};
int main()
{ 

  
  boy b1;
  girl g1 ;

  person *ptr = NULL;

  ptr =  &b1;
  ptr->give();

  ptr =  &g1;
  ptr->give();
 

  return 0;
}