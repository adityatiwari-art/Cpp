#include<iostream>
using namespace std;
class complex;
class calculator;
class calculator
{
public:
   void complexsum(complex O1,complex O2);
  
};

class complex
{
private:
  int a,b;
  
public:
  // friend void calculator::complexsum(complex O1,complex O2);//individually declared as friend 
  friend class calculator;   //friend class-hence all functions inside are friend of complex class 
  void setdata(int x,int y)
  {
    a=x;
    b=y;
  }
  void printnumber()
  {
    cout<<"entered complex number is: "<<a<<"+i"<<b<<endl;
  }
  
};
void calculator::complexsum(complex O1,complex O2)
   {
   cout<<"sum of complex numbers is: "<<O1.a+O2.a<<"+i"<<O1.b+O2.b<<endl;
   } 
int main()
{
 complex O1,O2;
 O1.setdata(4,5);
 O1.printnumber();

 O2.setdata(3,8);
 O2.printnumber();
 calculator O3;
 O3.complexsum(O1,O2);
}

