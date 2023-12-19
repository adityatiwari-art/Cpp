#include <iostream>
using namespace std;
class showpiece;
class showpiece
{
  int show2 = 34;
  friend void show(showpiece obj);

public:
};

class base
{
public:
  int var_base = 4;
  // void show(showpiece obj) throwing error dont know why
  // {
  //   cout << "i am show 2: " << obj.show2 << endl;
  // }
  void virtual display()
  {
    cout << "1.the value of  var_base is" << var_base << endl;
  }
};
class derived : public base
{
public:
  int var_derived = 7;
  void display()
  {
    cout << "2.the value of  var_derived is " << var_derived << endl;
    cout << "2.the value of  var_base is " << var_base << endl;
  }
};
int main()
{
  base *pointer_to_base;       // both derived class and base class obj can be there since type is base
  derived *pointer_to_derived; // only derived class object can be there because type  is derived
  derived d1;
  base b1;
  pointer_to_base = &b1; //jiski billi usi se meow
  pointer_to_base->display();
  pointer_to_base = &d1;  //derived display billi
  pointer_to_base->display();
  // pointer_to_base->show();
  cout << "***************************************************************************" << endl;
  pointer_to_derived = &d1;
  pointer_to_derived->display();
  // cout<<"2.the value of var-base "<<(pointer_to_derived->var_base)<<endl;
  // pointer_to_base->display();
  // // pointer_to_base->var_derived;
}