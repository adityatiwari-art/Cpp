#include <iostream>
using namespace std;
class base1
{
protected:
 int base1int;
 public:
 void set_base1int(int a){
  base1int=a;
 }

};
class base2
{
protected:
 int base2int;
public:
 void set_base2int(int a){
  base2int=a;
 }
};
class derived:public base1,public base2   //not declareable but definable
{
 public:
 void show()
 {
   
  cout<<"the value of base1int is "<<base1int<<endl;
  cout<<"the value of base2int is "<<base2int<<endl;
  cout<<"the sum of these values is "<<base2int+base1int<<endl;
 }
};
int main()
{
 derived d1;
d1.set_base1int(4);
d1.set_base2int(6); 
 d1.show();
}
// inherited derived class be like 
// base1int------->protected
// base2int------->protected
// set_base1int------->public 
// set_base2int------->public