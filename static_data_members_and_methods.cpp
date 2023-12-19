#include <iostream>
using namespace std;
class employee
{
private:
  int id;
  static int count;    //static data member of class employee
public:
  void setdata();
  void getdata();
  static void func();
};
int main()
{
  employee aditya,rohan,abhishek;
  aditya.setdata();
  aditya.getdata();

  rohan.setdata();
  rohan.getdata();

  abhishek.setdata();
  abhishek.getdata();
  
  employee::func();
}
int employee::count;
void employee::setdata()
{
  cout<<"enter employee id: ";
  cin>>id;
  count++;
}
void employee::getdata()
{
  cout<<"employee number"<<count<<"id is: "<<id<<endl;

}
void employee::func()
{ //cout<<"id is:"<<id;    can access only static data members hence error in this line
  cout<<"inside static member function: "<<count;
}