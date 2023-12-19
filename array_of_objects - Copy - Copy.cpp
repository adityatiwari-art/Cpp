#include <iostream>
using namespace std;
class employee
{
private:
  int id;
public:
  void setdata();
  void getdata();

};
int main()
{
  employee em[5];
  for(int i=0;i<5;i++)
  {
  em[i].setdata();
  em[i].getdata();
  }
  
}

void employee::setdata()
{
  cout<<"enter employee id: ";
  cin>>id;
}
void employee::getdata()
{
  cout<<"id is: "<<id<<endl;

}
