#include <iostream>
using namespace std;
int main()
{
  const int p=8;  //constant keyword keeps the data to be read only it cant be uninitialised since it keeps data 
  // constant hence it doesnot keeps garbage value as a constant in itself(const int p; is wrong since uninitialised and p++ is also wrrong since it is read only variable)
  cout<<p;
  char c='a';
  char d='b';
  char b='e';
  char const *m=&c;//const char and char const are same 
  m=&b;  //pointer is not constant 
  // *m='n';   using the pointer you cant alter the value at reference since its constant
  c='h';  //c is not constant actually but is constant for the pointer m;
  char *const n=&d;
  *n='a';
  // n=&b;


}
// char const *m = &c; : This declares a pointer m that points to a constant character (char const). The pointer m itself is not constant and can be reassigned to point to a different memory location. However, it is pointing to a constant character c, meaning that through m, you cannot modify the value of c.
// char *const n = &d; : This declares a constant pointer n that points to a character (char). The pointer n itself is constant and cannot be reassigned to point to a different memory location. However, you can modify the value of the character d through n since n is not pointing to a constant character
// declaration :
// char const    *const n=&k;
//    ^               ^
//    |               |
//    |               |
//    |             this tells about the pointer type means pointer is const
// this tells about value in pointer means it takes value at place where pointer is pointing as constant an hence the value where the pointer is pointing can not be changed    
