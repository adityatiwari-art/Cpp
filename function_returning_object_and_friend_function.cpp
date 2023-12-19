
#include <iostream>
using namespace std;
class complex
{
private:
  int a, b;

public:
  void setdata(int x, int y)
  {
    a = x;
    b = y;
  }
  void printnumber()
  {
    cout << "my number is: " << a << "+i" << b<<endl;
  }
  friend complex complexsum(complex O1, complex O2);
};
complex complexsum(complex O1, complex O2)
{
  complex O3;
  O3.a = O1.a + O2.a;
  O3.b = O1.b + O2.b;
  O3.printnumber();
  return O3;
}

int main()
{
  complex c1,c2,c3;
  c1.setdata(3,4);
  c1.printnumber();
  c2.setdata(5,6);
  c2.printnumber();
  complexsum(c1,c2);


}