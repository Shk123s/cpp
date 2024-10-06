#include <bits/stdc++.h>
using namespace std;
// by using template class we can use any data type 
// whta ever we want to .
template<class T>
class Rectangle
 { private :
   T a ;
   T b;
   public:
   Rectangle(T a,T b);
   T add();
   T sub();
};
 template<class T >
   Rectangle<T>::Rectangle(T a,T b)
  {
     this->a = a;
     this->b = b;
  };
 template<class T >
  T Rectangle<T>::add()
  {
     T c ;
      c = a + b;
      return c ;
  };
 template<class T >
  T  Rectangle<T>::sub()
  {
       T c ;
       c = a - b;
      return c ;

  };
int main()
{     
   Rectangle ar (10,5);

   cout << "add " << ar.add();
   cout << " sub " << ar.sub();

     return 0;
    
}   