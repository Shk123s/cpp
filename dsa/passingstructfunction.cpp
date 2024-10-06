#include <bits/stdc++.h>
using namespace std;

 struct Rectangle {
    int length;
    int breadth;
};
//this function works is that create heap struct object and return  
  Rectangle* fun()
{
    struct Rectangle *p ;
     p = new Rectangle;
     p->length = 15;
     p->breadth = 30;
     return p;
}
//  // this is call by address using array in struct 
// int * func ( Rectangle  *p )
//   {
//      p->a[0] = 200;  
//      cout << p->a[0] << " " << p->a[1] << " " << p->n;
//      return 0;
// }
int main()
{     
    struct Rectangle  *ptr =  fun();
    cout <<endl <<  ptr->length << ptr->breadth ;
    delete ptr ;

    //    Rectangle  r =  { {10,5},5}; 
    //    func(&r);
    //    cout <<endl <<  r.a[0] << r.a[1] << " " << r.n;
    //    cout << endl << "neeche ka loop h"; 
  
     return 0;
    
}   