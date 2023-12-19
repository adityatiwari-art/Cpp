#include<iostream>
using namespace std;
class complex
{
private:
  int a,b;
public:
  complex();
  complex(int x,int y);  //parameterised with two argument
  complex(int x);        //parameterised with one argumment 
  void printnumber();
};
complex::complex(int x,int y)
{
 a=x;
 b=y;
}
complex::complex(int x)
{
 a=x;
 b=0;

}
complex::complex()
{
 a=0;
 b=0;
}
void complex::printnumber()
{
  cout<<"your number is : "<<a<<"+i"<<b<<endl;
}
int main()
{
  complex O1,O2(5,6),O3(7);   //arguments are matched to check which constructor is being called
  O1.printnumber();
  O2.printnumber();
  O3.printnumber();
}

