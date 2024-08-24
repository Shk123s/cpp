#include <bits/stdc++.h>
using namespace std;
//static will create ek hi baar in memory islye static
// shared by the objects and common to all objects
class  Alpha
{ 
  private :
   int a ,b;

public :

    Alpha()
  { a = 5;
    b = 5 ;
    stat++;
   
  }

  static int stat;
};
int Alpha::stat = 0;  

int main()
{ 
   Alpha a1;
   Alpha b2 ;
   Alpha b3 ;

   cout << "a ka value " << a1.stat <<endl;
   cout << "b2 ka value " << b2.stat <<endl;
   cout << "vale usign class name  " << Alpha::stat <<endl;




  return 0;
}