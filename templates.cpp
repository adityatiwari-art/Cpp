// Templates in c++ is defined as a blueprint or formula for creating a generic class or a function. Generic Programming is an approach to programming where generic types are used as parameters in algorithms to work for a variety of data types.In C++, a template is a straightforward yet effective tool.
#include <iostream>
using namespace std;
// template <class T>
template <class T>
class sample{
public:
T y;
void getdata()
{
  cin>>y;
  cout<<y;
}
};
template <class T>
class vector{
  int size;
  T* arr;
  public:
  vector(int s)
  {
    size=s;
    arr=new T[size];
    cout<<"enter the elements\n";
    
      for(int i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    cout<<"entered successfully\n";
  }
  T vecdotpro(vector &v)
  {
    T x=0;
    for(int i=0;i<size;i++)
    x+=this->arr[i]*v.arr[i];
    return x;
  }
};
int main(){
// vector <int> v1(3);
//  vector <int> v2(3);
//  int b=v1.vecdotpro(v2);
//  cout<<b;
//  vector <float> v1(3);
//  vector <float> v2(3);
//  float b=v1.vecdotpro(v2);
//  cout<<b;
//  return 0;
sample <int>s1;
s1.getdata();
}
// dont forget to associate size with the array 
// template for an object is aa class 
// similarily classes have have templates for their generic definition