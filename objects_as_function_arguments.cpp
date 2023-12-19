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
    cout << a << "+i" << b << endl;
  }
  void setsum(complex a1, complex a2)
  {
    a = a1.a + a2.a;
    b = a1.b + a2.b;
  }
};

int main()
{
  complex o1, o2, o3;
  o1.setdata(3, 4);
  o1.printnumber();

  o2.setdata(2, 5);
  o2.printnumber();

  o3.setsum(o1, o2); // objects as function arguments
  o3.printnumber();
}
