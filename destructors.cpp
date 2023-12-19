#include <iostream>
using namespace std;
int count=0;
class num
{

public:
  num()
  {
  count++;
  cout<<"constructor is called for obj "<<count<<endl;
  }
  ~num()
  {
    cout<<"destructor is called for obj "<<count<<endl;
    count--;
  }
};

int main()
{ cout<<"in main"<<endl;
  num obj1;
  {
    cout<<"block starts"<<endl;
    cout<<"two objects created"<<endl;
    num obj2,obj3;
    cout<<"block ends"<<endl;
    //destructor for obj3 and 2 is called because their scope ends
  }
  cout<<"back to main"<<endl;

 //destructor is called for obj1 because its scope ends
}
