// this is to understand the need of protected access specifier in cpp. we know that that the private(very sensitive info) data members are not accessible and also not inheritable but what if we need inheritability but not accessibility in that condition we have defined protected(less sensitive info) access specifier in cpp.c++ is also a extend form of c remember

// class base
// {
// int a;  
// private:   here both a and b are private if not specified then private and if specified then also private
//   int b;
// public:
// };

#include <iostream>
#include <stdio.h> // you can use "C" I/p and O/p function here also but the c++ provides us rid from format specifier

using namespace std;
class base
{
protected:  
  int a=1;  
private:
  int b=2;
public:
  int c=3;
};
class derived1:protected base{
}; 

class derived2:public base{
};

class derived3:base{
};


int main()
{ 
  base b1;
  derived1 d1;
  derived2 d2;
  derived3 d3;
  // cout<<d1.c;//not accessible because public+protected--->protected
  // cout<<d2.c;// accessible because public+public--->public
  // cout<<d3.c;//not accessible because public+private--->private
  // cout<<b1.c;//accessible because public
     
  // int a=10;
  // printf("%d",a);  //applicable;

}
