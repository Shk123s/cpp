#include <bits/stdc++.h>
using namespace std;
// contrtctor doesnot return anything 
// same name with as same class
// when object get call a default constructor called and memory gets allocatin to member variable and function
class Person 
{
private: 
string name;
int age,height;
public : 
 Person()
 {
   name = "ss";
   age = 34;
    height = 4455;
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

  Person call;
   call.getData();
  return 0;
}