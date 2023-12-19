#include <iostream>
using namespace std;
class shop
{
private:
  int itemid[50];
  int itemprice[50];
  int counter;

public:
  void setdata();
  void init_counter() { counter = 0; }
  void getdata();
};

void shop::setdata()
{
  cout << "enter item id: ";
  cin >> itemid[counter];
  cout << "enter item price: ";
  cin >> itemprice[counter];
  counter++;
}
void shop::getdata()
{
  for (int i = 0; i < counter ;i++)
  {
    cout << " item id: "<<itemid[i];
    cout << " item price: "<<itemprice[i];
  }
}
int main()
{
  shop O1;
  O1.init_counter();
  O1.setdata();
  O1.setdata();
  O1.setdata();
  O1.getdata();
  
}