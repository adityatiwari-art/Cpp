#include <iostream>
using namespace std;
class complex{
  int real,img;
public:
   complex(int a=0,int b=0){
    real=a;
    img=b;
   }
  //  complex(int a=0,int b=0,int c=0){
  //   real=a;
  //   img=b;
  //  }
   void getcomplex()
   {
    cout<<real<<"+i"<<img<<endl;
   }
};
int main()
{
  complex c1;  //see here no default constructor is there but the code is executing without any error because of the default arguments in parameterised constructor so this is the way by which you can skip the default constructor and have a non parameterised object definition buttttttttt there must be a single parameterised constructor beacause constructor overloading is not possible since matching of arguments is not possible because no arguments are supplied.
  c1.getcomplex();

}