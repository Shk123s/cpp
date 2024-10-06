#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
    int length;  // 2 byte
    int breadth; // 2 byte
};
struct card 
{
    int shape;
    int color;
    int fade;
};
int main()
{     
// only intilaization   struct rectangle r ;

// only intilaization  and declaration 

struct card deck[20] = {{1,2,3}};  // 20x 6 120bytes will contain.

cout << "Deck of card of shape : " << deck[0].shape  ;
cout << "Deck of card  of color: " << deck[0].color   ;
cout << "Deck of card  of fade  : " << deck[0].fade  ;


// struct rectangle r =  {2,3};
  

//   r.length = 2;
//   r.breadth = 3;
//    cout << "Area of rectangle is : " << r.length * r.breadth ;
     
  
 
    return 0;
    
}   