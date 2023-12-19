#include <iostream>
using namespace std;
class complex
{
private:
  int a,b,c;
public:
  complex(int x,int y=7,int z=2)    //right side arguments must have default value to the default value containing argument 
  {    
    a=x;
    b=y;
    c=z;
  }
  void printnumber()
  {
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
  }
};
 int main()
 {
  complex O1(3);  //default  values will be assign to the rest of the data
  O1.printnumber();
 }
