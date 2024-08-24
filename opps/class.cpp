#include <bits/stdc++.h>
using namespace std;
class house 
{
private :
    //member variable 
     int length = 0;
     int breadth = 0;
     
public :
    void setData(int x,int y)
    {    
        length = x ;
        breadth = y;
       
    }
    void area ()
    {
      cout <<"Area of the house is : "<< length * breadth <<endl;
    }
};
int main()
{     
    // initializing memory allocation
    house shaqeebHouse;
    shaqeebHouse.setData(400,500);
    shaqeebHouse.area();

     // Each time object created and each will get fresh memory allocation ,not dependency of one another.

    // keynotes: setData and area will used for all  
    // but length and breadth and x and y each of them having  each  separate variable 
    house asifHouse;
    asifHouse.setData(600,800);
    asifHouse.area();
  
 
  
    return 0;
}   