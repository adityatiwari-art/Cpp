#include <iostream>
using namespace std;
class shallow_copy
{
private:
  int a,*p;
public:
  
  shallow_copy(shallow_copy &obj);
  shallow_copy(){}

  void setdata(int x,int *y)
  {
    a=x;
    *p=*y;
  }
  void printdata()
  {
    cout<<"a: "<<a<<endl<<"*p: "<<*p<<endl;
    cout<<"value is p is:"<<p<<endl;    //both object as same address in p means shallow copy
  }
  void update()
  {
    a++;
    (*p)++;
  }
  
};
shallow_copy::shallow_copy(shallow_copy &obj)
{
 a=obj.a;
 p=obj.p;
}
int main()
{int b=5;
cout<<"address of b is: "<<&b;
 shallow_copy obj1;
 obj1.setdata(23,&b);
 cout<<"obj1 data!!!\n";
 obj1.printdata();
 shallow_copy obj2(obj1);
 cout<<"obj2 data!!!\n";
 obj2.printdata();
 cout<<"void update for obj1 called ";
 cout<<"obj1 data!!!\n";
 obj1.update();
 obj1.printdata();
 cout<<"obj2 data!!!\n";
 obj2.printdata();
 

}