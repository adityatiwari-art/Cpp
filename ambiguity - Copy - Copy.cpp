// #include <iostream>
// using namespace std;
// class base1{
// public:
//  void greet()
//  {
//   cout<<"hello how are you?\n";
//  }
// };
// class base2{
// public:
//   void greet()
//   {
//   cout<<"kaise ho\n";
//   }
// };
// class derived:public base1,public base2{

// };
// int main()
// {
// base1 o1;
// o1.greet();
// base2 o2;
// o2.greet();
// derived d1;
// // d1.greet();   ambiguity arrises
// }

// solution of ambiguity by using scope resolution character in two ways
// 1.we know that when we have same named function in the derived class then no ambiguity arrises and the member function of the derived class is called so we can call the base class' function using the calling statement inside the derived class function with the scope resolution operator
// 2.another method is directly calling base class' function in main using scope resolution
#include <iostream>
using namespace std;
class base1{
public:
 void greet()
 {
  cout<<"hello how are you?\n";
 }
};
class base2{
public:
  void greet()
  {
  cout<<"kaise ho\n";
  }
};
class derived:public base1,public base2{
public:  //*****
  void greet()
  {
    base1::greet();
    base2::greet();
  }
};
int main()
{
derived d1;
d1.greet();   //way 1:ambiguity solved with derived class function greet// base class' function is overwrite by derived class function

// way 2:if no greet present in derived class then directly calling base1 greet
d1.base1::greet();
}

