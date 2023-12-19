#include <iostream>
using namespace  std;
class base{
public:
int var_base=4;
void display()
{
  cout<<"2.the value of  var_base is"<<var_base<<endl;
}
};
class derived:public base{
public:
int var_derived=7;
void display()
{
  cout<<"1.the value of  var_derived is "<<var_derived<<endl;
}
};
int main()
{base* pointer_to_base; //both derived class and base class obj can be there since type is base
derived* pointer_to_derived;//only derived class object can be there because type  is derived
derived d1;
base b1;
pointer_to_base=&d1;
pointer_to_derived=&d1;
pointer_to_derived->display();
cout<<"2.the value of var-base "<<(pointer_to_derived->var_base)<<endl;
pointer_to_base->display();
// pointer_to_base->var_derived;
}