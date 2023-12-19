#include <iostream>
using namespace std;
// base class
class employee
{
private://private data is inaccessible
public:
  int id;
  float salary;
  // Mimp----------remeber that the declaration and the initialisation at two different lines is not possible in class so int id; id=7; will give you error

  employee(){
    id=78;
    cout<<"default constructor of base class executed!!\n";} 
    //default constructor is called by default by derived class when element of base class is used
  employee(int i,int s)
  {
    id=i;
    salary=s;
  }
  void setdata(int i,float s)
  {
  id=i;
  salary=s;
  }
  void printdata()
  {
    cout<<"id:"<<id<<endl;
    cout<<"salary:"<<salary<<endl;
  }
};
//derived class class {{derived_class_name}}:{{visibility-mode}} {{base_class_name}},double{{}} means that inner content is replaced by something 
class programmer:employee   //private by default
//private data is inheritable and hence not accessible in derived class
{public:
  int languagecode=9;
  programmer(int i)
  {
    id=i;
  }
  void getdata()
  {
    cout<<id<<endl;
  }
};
// default constructor is required in base class because it cally it na dif it is not declare incase when parametered constructor is declared theen it will show error


int main(){
  // employee harry;
  // employee e1;
  programmer harry(5);  

  // this object has the meaning in both the derived and base class since all the accessible data of base class is available at the derived class therefore it cant be proved so no need to declare a seprate object for the base class in general situation.

  // if no parametes passed it will search for default constructor which doesnot  exist

  harry.getdata(); 
   //no argument function will execute (function overloading ) i.e getdata of prgrammer not of employee

  // harry.setdata(6,5000000);
  // harry.printdata();
  // error  since you have kept the visibility mode to be private means the data of employee is private to the object of programmer therefore calling of its function is shpwing us the error what you can do is appply the public visibility mode to the derived class

  //cout<<harry.id;  
  //error but if visibility mode is public then no error because visibility mode is private by default

  return 0;

}
// so in this code constructor of base class is called twice once when its object e1 is created and once when the object of employee harry is created .