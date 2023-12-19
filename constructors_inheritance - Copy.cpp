#include <iostream>
using namespace std;
class base1
{
private:
  int x;

public:
  base1(){}
  base1(int a)
  {
    cout << "constructor of base1 called!!\n";
    x = a;
    cout << x;
  }
};
class base2
{
private:
  int y;

public:
  base2() {}
  base2(int b)
  {
    cout << "constructor of base2 called!!\n";
    y = b;
    cout << y;
  }
};
class derived : virtual public base1 ,virtual public base2
{
private:
  int z;
  int m;

public:
  derived(int a, int b, int c, int d) : base1(c), base2(d)
  {
    cout << "constructor of derived class called!!!\n";
    z = a;
    m = b;
  }
};

int main()
{
  derived o1(1,2,3,4);
  return 0;

}