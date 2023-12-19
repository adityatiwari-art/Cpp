#include <iostream>
using namespace std;
// template <class T,class M=int,class N=int>
// T func(M a,N b)
// {M x=a;
// N y=b;
// cout<<x<<endl<<y<<endl;
// return a+b;
// } 
// int main()
// {
// char c;
// c=func <char> (95.5,3);
// cout<<c;
// }
// member function templates 
// you need to pass the template parameters while creating object of anyclass if default parameters are not passed otherwise it will raise an error despite of not using any parameter in te class

// trying to use the class template aditya as a template argument for itself, which is not allowed.    aditya <aditya> A1;

//you cannot provide a default template argument for a member function template within a class template. This means that the line T aditya<T>::setter() with a default argument for the template parameter T is not allowed.
class ad{
  public:
  int x=99;
};
template <class T=ad>
class aditya{
  public:
  int b=45.6;
  T setter();
};
template <class T>
T aditya<T>::setter() 
{ 
T a;
return a;
}
int main()
{
  aditya <ad> A1;
  ad c;
  c=A1.setter();
  cout<<c.x<<endl;
  return 0;
}