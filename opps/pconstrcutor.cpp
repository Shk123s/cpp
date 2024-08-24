#include <bits/stdc++.h>
using namespace std;
// contrtctor doesnot return anything 
// same name with as same class
// when object get call a default constructor called and memory gets allocatin to member variable and function
// paramitarize constructor required parameter rest is same as constructor 
class Person 
{
private: 
string name;
int age;
float height;

public : 
 Person(string name_a,int age_a,float height_a)
 {
   name = name_a;
   age = age_a;
   height = height_a;
 }
 void getData()
 {
    cout <<"Name is "<< name << endl;
    cout <<"age is "<< age << endl;
    cout <<"height is "<< height << endl;
 };
};

int main()
{  
 
  Person pcall("john",32,33.4);
  pcall.getData();
  return 0;
}