#include <bits/stdc++.h>
using namespace std;
//static will create ek hi baar in memory islye static
// shared by the objects and common to all objects
// static member can only access static members; 
class  Alpha
{ 
  private :
   int a ,b;

public :

    Alpha()
  { a = 5;
    b = 5 ;
   
  }

  static int stat;

  static int getstat()
  {
      stat++;
      return stat;
  }
};
int Alpha::stat = 0;  

int main()
{   //everytime getstat uses stat variable 
   // and increment the stat variable 
   // static function uses the static member variable 
   // both syntax can be used 
   cout << "vale using getstat  " << Alpha::getstat() <<endl;
   Alpha a1;
   Alpha b2 ;
  
  cout << "vale using getstat  " << Alpha::getstat() <<endl;
   cout << "a ka value " << a1.getstat() <<endl;
   cout << "b2 ka value " << b2.getstat() <<endl;




  return 0;
}