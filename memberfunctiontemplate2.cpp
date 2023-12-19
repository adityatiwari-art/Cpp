#include <iostream>
using namespace std;
template <class T>
class vector{
  public:
  T x,y,z;
  template <class M>
  void setvec(M a,M b,M c);

  void getvec()
  {
    cout<<"vector is "<<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
  }
};
// if member function defined outside of class then the templates must be redefined 
template <class T>
template <class M>
void vector<T>::setvec(M a,M b,M c)
{ 
  x=a;
  y=b;
  z=c;
}
int main()
{vector <int>v;
v.setvec<int>(3,4,5);
v.getvec();
vector <float>v2;
v2.setvec<float>(3.5,4.7,5.8);
v2.getvec();
return 0;
}