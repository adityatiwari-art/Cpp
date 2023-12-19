#include <iostream>
using namespace std;
extern int x=7;  //global keyword doesnot exist in c or cpp
class vector{
  public:
  void getvec()
  {
    cout<<x<<endl;
  }
};
int main()
{vector v;
v.getvec();
return 0;
}