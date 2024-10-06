#include <bits/stdc++.h>
using namespace std;
struct pointers
{
    int length;
    int breadth;
};

int main()
{ 
    // dynamic memory 
// struct pointers r = {10,5};
struct pointers *p;
 p = new pointers ;
 p->length = 23;
 p->breadth = 44;

// pointer points to memory address of r creating the object in the heap
cout << p->length << endl;
cout << p->breadth << endl;

 // free allocated memory
   delete p;

//  //variable  
//    int a = 9;
//    int  *p ;
//     p = &a;
//     cout << p << endl << &a; // memory addresses 
  
    return 0;
    
}   