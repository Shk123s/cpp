#include <bits/stdc++.h>
using namespace std;
//virtual fucntion 
class person 
{ 
public :
  //abstract 
 // by adding 0 and removing body and his object is never created 
 // become pure  virtual function. 
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