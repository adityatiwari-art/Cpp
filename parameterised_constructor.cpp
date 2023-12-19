#include <iostream>
using namespace std;
class complex
{
private:
  int a,b;
public:
  complex(int,int);
  void printnumber()
  {
    cout<<a<<"+i"<<b<<endl;
  }
};
complex::complex(int x,int y)
{
  a=x;
  b=y;
}
int main()
{ //implicit call
  complex O1(4,5),O2(6,7);
  O1.printnumber();
  O2.printnumber();
  // explicit call
  complex O3=complex(8,9);
  O3.printnumber();
}

