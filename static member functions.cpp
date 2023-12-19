#include <iostream>
using namespace std;
class xyz{
  public:
  static int x;
  static void func1()
  {
    cout<<x;
  }
};
 int xyz::x=4;
int main()
{
  xyz obj;
  xyz::func1();
}