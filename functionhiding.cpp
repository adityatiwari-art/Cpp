// non occurance of function overloading in case of function with same name in child and parent 
// function overloading happens in a single class 
// funtionn overridding happens is base-derived class 
// and in function  hiding when the same named function are in both base and derived class but the arguments doesnot match in both then it is called function hiding
#include <iostream>
using namespace std;
class a
{
public:
 void func1()
{
  cout<<"base"<<endl;
}
};
class b:public a
{
public:
 void func1(int x)
 {
  cout<<"derived"<<endl;
 }
};
int main()
{
  b obj;
  obj.func1(3);  //derived is printed 
  // obj.func1();  error because it will bind the derived class function and since it takes arrugment and we have not provided any so error binding as per func1()-of->typeofobj typeofobj i.e b this is called function hiding
}

 