#include <bits/stdc++.h>
using namespace std;
//virtual fucntion 
class person 
{ 
public :
 //virtual by adding this keyword
  virtual void  give()
  {
     cout << "bun" << endl;
  }

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