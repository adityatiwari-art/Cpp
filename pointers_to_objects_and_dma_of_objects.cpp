#include<iostream>
using namespace std;
class dma{
  public:
  string name;
  void  getdata()
  {
    cout<<"name is "<<name<<endl;
  }
  };
int main()
{
dma *ptr=new dma; // object is created in heap and the address is returned 
(*ptr).name="aditya";   //ptr=address of object created and *ptr is that object having values
(*ptr).getdata();
// dot opertator uses object to access data members 

dma *p=new dma;
p->name="kunal";  //arrow operator is used to get value at ptr 
p->getdata();
// arrow or member access operator uses a pointer to access members here p or ptr and not *p or *ptr

// array of objects dma
dma *arr=new dma[4];
arr[0].name="ronny";   // arr[i] is a value(object) so dot operator
arr[0].getdata();
arr[1].name="ele";
arr[1].getdata();
arr[2].name="fragile";
arr[2].getdata();
arr[3].name="anny";
arr[3].getdata();

cout<<"using arrow operator\n";
arr->name="ronny";
arr->getdata();
// here parenthesis  are must because precedence of arrow is higher than +
(arr+1)->name="ele";   // (arr+2) is a pointer so arrow operator
(arr+1)->getdata();
(arr+2)->name="fragile";
(arr+2)->getdata();
(arr+3)->name="anny";
(arr+3)->getdata();
} 
// (arr+2) is a pointer so arrow operator   (arr+i). is incorrect
// arr[i] is a value(object) so dot operator arr[i]->  is incorrect

// ********note-difference between member access and dot operator or dereferencing operator**********
// arrow or member access operator uses a pointer to access members here p or ptr and not *p or *ptr
// dot opertator uses object to access data members 