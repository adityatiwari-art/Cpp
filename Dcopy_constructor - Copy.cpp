#include<iostream>
using namespace std;
class number
{
private:
  int num;
public:

 number(){}
 void normal(number obj,number obj1);
 void setnum(int x)
 {
  num=x;
 }
  number(number &);
  void printnum()
  {
    cout<<"your number is: "<<num<<"\n";
  }
};
void number::normal(number obj,number obj1)
{
  obj=obj1;
}
number::number(number &obj1)
{ 
  cout<<"copy constructor is invoked!!\n";
  num=obj1.num;
}
int main()
{
  number obj1,obj3,obj5;
  obj1.setnum(100);     
  obj1.printnum();
  number obj2(obj1);      //copy constructor is invoked
  obj2.printnum();
  obj3=obj2;              //no copy constructor invoked message shown 
  obj3.printnum();        //since obj3 was already declared hence no copy constructor is invoked
  number obj4=obj3;
  obj4.printnum();        //copy constructor is invoked during declaration
  cout<<"last\n";
  obj5.normal(obj5,obj1);  //search why copy constructor is invoked (2 times)
  obj5.printnum();         //search why garbage value is assigned 


}
