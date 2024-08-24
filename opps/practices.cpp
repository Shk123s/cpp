#include <bits/stdc++.h>
using namespace std;

class PhoneDetails
{
  private : 
  string Name,Processor;
  int Ram,Battery;
  
  public :
  PhoneDetails(string Name_a = "null",string Processor_a="null",int Ram_a=1, int Battery_a=1)
  { 
   Name  = Name_a;
   Processor = Processor_a ;
   Ram =  Ram_a ;
   Battery = Battery_a; 
  }

   PhoneDetails(PhoneDetails &mobile)
  { 
      Name = mobile.Name;
      Processor = mobile.Processor;
      Ram = mobile.Ram;
      Battery = mobile.Battery;
  }
  void getData();
};
 void PhoneDetails::getData()
  {
    cout << "Name :" << Name << endl;
    cout << "Processor :"<< Processor << endl;
    cout << "Ram :"<< Ram << endl;
    cout << "Battery : "<< Battery << endl;
  };
int main()
{ 
  PhoneDetails lodo;
  PhoneDetails lodo2("moto","snapdragon",16,5000);
  PhoneDetails lodo3(lodo2);
 
  lodo.getData();
  lodo2.getData();
  lodo3.getData();

  return 0;
}