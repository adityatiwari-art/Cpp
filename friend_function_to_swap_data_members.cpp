#include <iostream>
using namespace std;
class xyz;
class abc
{
private:
  int a,b;
  friend void swap(abc &,xyz &);
public:
  void setdata(int x,int y)
  {
    a=x;
    b=y;
    cout<<&a<<endl;
    cout<<&b<<endl;
  }
  void printnumber()
  {
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
  }
};

class xyz
{
private:
  int x,y;
  friend void swap(abc &,xyz &);
public: 
  void setdata(int a,int b)
  {
    x=a;
    y=b;
  }
  void printnumber()
  {
    cout<<"x:"<<x<<endl<<"y:"<<y<<endl;
  }
};
void swap(abc &O1,xyz &O2)
{int temp,temp2;
 temp=O1.a;
 O1.a=O2.x;
 O2.x=temp;
 temp2=O1.b;
 O1.b=O2.y;
 O2.y=temp2;
}
int main()
{
  abc O1,O3;
  xyz O2;
  O1.setdata(2,3);
  // cout<<"obj1 "<<&O1<<endl;          //address of object same as address of first data member
  O1.printnumber();
  // O3.setdata(5,7);
  // cout<<"obj3 "<<&O3<<endl;          
  O2.printnumber();
  swap(O1,O2);
  O1.printnumber();
  O2.printnumber();

}

