// in this program we have accesed the private data member and private member function using a public member function the return value of this function is that private data member and the call of the private member function is within the same  public member function but you need to take care that the public member function and private data member and private member function should be in the same class because private data members are not inheritable and in that conditon you will nott be able to access those private data members using this technique
#include <iostream>
using namespace std;
class base
{
private:
  int data1;
  void setdata2()
  {
    cout<<"enter the value of private data member data1: ";
    cin>>data1;
  }
public:
  int data2;
  base()
  {
    data1=10;
    data2=20;
  }
  void setdata(int d,int d2)
  {
  data1=d;
  data2=d2;
  }
  int getdata()
  {
  
  return data1;   //remember the  return type of function 
  // returning the private data member to access it
  }
  int getdata2()
  { 
    setdata2(); 
    cout<<"value of data2 id: "<<data2<<endl;
  }
};
class derived:public base
{
 int data3;
 public:
 void process()
 {
 data3=getdata()*data2;
 }
 int getdata3()
 {
  return data3;   //accessing of private data member using return 
 }
};
int main()
{
  derived d1;
  d1.getdata2();  /*used to set data1 private member using another function setdata2() which is itself private and whose call is inside the member function of that class so there it was assesible and it itself can access the private data member data1 */
  // d1.setdata(20,30);
  // d1.process();
  // cout<<"the value of data3 is:"<<d1.getdata3()<<endl;
  
}

