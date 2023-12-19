// add two complex numbers using a function that takes reference of an object
#include <iostream>
using namespace std;
class complex
{
private:
  int real,img;
public:
   void sumcomplex(complex &obj ,complex &obj2);
   void setdata(int x,int y)
   {
    real=x;
    img=y;
   }
   void show()
   {
    cout<<"your complex number is: "<<real<<"+i"<<img<<endl;
   }
};

void complex::sumcomplex(complex &obj,complex &obj2)
{
  real=obj2.real+obj.real;
  img=obj2.img+obj.img;
}
int main()
{
  complex obj1,obj2,obj3;
  obj1.setdata(4,5);
  obj1.show();
  obj2.setdata(7,8);
  obj2.show();
  obj3.sumcomplex(obj1,obj2);
  obj3.show();
}
