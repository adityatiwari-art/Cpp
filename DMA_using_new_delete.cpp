#include <iostream>
using namespace std;
int main()
{
  int *ptr = new int;
  *ptr = 12;
  cout << "value at ptr is(address) " << ptr << endl;
  cout << "value at which ptr is pointing " << *ptr << endl;
  float *p = new float(34.2);
  cout << "value at p is(address) " << p << endl;
  cout << "value at which p is pointing " << *p << endl;
  int *arr = new int[5];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;
  for (int i = 0; i < 5; i++)
  {
    cout << "arr[i]=" << arr[i] << endl;
  }
  delete ptr, p;
}
