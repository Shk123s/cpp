#include <bits/stdc++.h>
using namespace std;
// reusablity,modularizing,redability
// must return the datatype 
// if not using void with functions
//void doesnot return anything 
// can be anything int or string
// pass by value
// pass by reference 
// array pass the original value only means pass by reference 


// pass by value and // pass by reference
void dosomething(string &s)
{ s[0] = 'T';
 cout << s;

}

int addNumbers(int num1 ,int num2)
{
  int  sum = num1 + num2;
   return sum;
}

void printName(string name)
{
    cout << "hey " << name;
}

int main()
{   

   string s = "Raj";
   // it will send a copy not a original value in pass by value;
   dosomething(s);
   cout << s;
//   int num1 , num2;
//   cin >> num1 >> num2;
//   int sum = addNumbers(num1,num2);
//   cout << "hogaya " <<sum; 

//   string name;
//   cin >> name;
//    printName(name);

    return 0;
}   