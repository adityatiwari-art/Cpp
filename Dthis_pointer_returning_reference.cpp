#include <iostream>
using namespace std;
class abc{
  int a;
  public:
  void setData(int a)
  {
    this->a=a;
  }
  abc & getData()  //reason why & is there is written at last
  {//this is function returning reference 
    return *this;
  }
  void getData2()
  {
    cout<<"the value of a is "<<a<<endl;
    // delete this;
  }
};
int main()
{
abc obj1;
// abc *a=obj1.getData();
// a->setData(45);
// obj1.getData2();
// obj1.getData().setData(45);
// obj1.getData2();
abc *ptr=&obj1;
(*ptr).setData(5);
(*ptr).getData2();
// *ptr is a reference to the object and not the value or address(ptr is address of that object)
// similarily *this is a reference to the object not value not the address
// so when we are returning *ptr the datatype of funtion must be class_name& and not only class_name(beacause it is the reference)
}