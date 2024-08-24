#include <bits/stdc++.h>
using namespace std;
// constructor doesnot return anything 
//copy constructor are used for creating new object from existing object 
class Person 
{
private: 
string name;
int age;
float height;

public : 
// No need to create default constructor in overload constructor
 Person(string name_a ="hello9",int age_a=3,float height_a=22.2)
 {
   name = name_a;
   age = age_a;
   height = height_a;
 }
 Person(Person &obj2)
 {
   name = obj2.name;
   age = obj2.age;
   height = obj2.height;
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
   //overloaded constructor 
  Person pdefault;
  pdefault.getData();
 
  Person pcall("john",32,33.4);
  pcall.getData();
 //copy constructor copy of other object
  Person obj2(pcall);
  obj2.getData();
  return 0;
}