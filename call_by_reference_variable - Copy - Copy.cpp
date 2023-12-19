// reference variable works same as the pointer 
#include <iostream>
using namespace std;
// call by pointer 
// void func(int *x,int *y)
// { (*x)++;
//   (*y)++;
//   cout<<(*x)<<endl<<(*y)<<endl;
// }
// int main()
// { int a=5,b=6;
//   cout<<a<<endl<<b<<endl;
//   func(&a,&b);
//   cout<<a<<endl<<b<<endl;
// }
// call by reference 
void func(int &x,int &y)
{ x++;
  y++;
  cout<<x<<endl<<y<<endl;
}
int main()
{ int a=5,b=6;
  cout<<a<<endl<<b<<endl;
  func(a,b);
  cout<<a<<endl<<b<<endl;
}
//********calling*********
// call by value 
// call by reference 
// call by pointer
//******returning*******
// return value
// return pointer
// return reference 
