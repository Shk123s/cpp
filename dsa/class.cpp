#include <bits/stdc++.h>
using namespace std;
class Rectangle
 {
   
    public:
     void initialise( int l,int b)
     {
        int length = l;
        int breadth = b;
     }
    int area (int length ,int breadth)
    {
        int a ;
        a = length * breadth;
        return a ;
    }
    int perimeter ( int length,int breadth)
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    } 
};
 
int main()
{     
   
     Rectangle r ;
     int l ,b ;
     cin >> l ;
     cin >> b ;

     int area1 = r.area(l,b);
     int p1 = r.perimeter(l,b);


    cout << "area " << area1 << endl;
    cout << "peri " << p1 << endl;
     return 0;
    
}   