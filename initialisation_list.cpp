#include <iostream>
using namespace std;
class demo{
  int a,b;
  public:
  demo(int i,int j):b(j),a(i+b)    
  // a is declared first so a(i+b) will be initialised first and since b contains garbage value(initially)so a=garbage+i and then b will be initialised as j 
   // data members are also initialised and used in initialisation list along with constructors
  {
   cout<<"value of a is "<<a<<endl; 
   cout<<"value of b is "<<b<<endl; 
  }
};
int main()
{demo demo1(5,6);
}
/*  all are correct
    demo(int i,int j):a(i),b(a+j) */
/*  demo(int i,int j):a(i),b(i+j) */
/*  demo(int i,int j):a(i),b(2*j) */
