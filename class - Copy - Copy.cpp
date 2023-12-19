#include<iostream>
using namespace std;
class employee
{
private:
  int a, b, c;

public:
  int d, e;
  // void setdata(int x, int y, int z);
  void setdata(int x, int y, int z);
  
  void getdata()
  {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
  }
};
// since a,b,c are not defined outside the class hence to define the function uotside the class we need ::
void employee::setdata(int x, int y, int z)
  {
    a = x;
    b = y;
    c = z;
  }
int main()
{
  employee obj1;
  obj1.e = 5;
  obj1.d = 4;
  obj1.setdata(1, 2, 3);
  obj1.getdata();
}