neither the base nor the derived class can b 
#include <iostream>
using namespace std;
class abstractbase
{
public:
virtual void virfunc()=0; 
};
class derived:public abstractbase
{
public:
};
int main()
{
derived b1;
}