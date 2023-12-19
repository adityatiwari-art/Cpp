#include <iostream>
using namespace std;
class student
{
private:
public:
  int roll_number;
  void setdata(int);
  int getdata(); 
};
void student::setdata(int x){
  roll_number=x;
}
int student::getdata(){
  cout<<"roll number is"<<roll_number<<endl;
}
class exam:public student{
  public:
  float maths;
  float physics;
  void setdata2(float,float);
  void getdata2(){
    cout<<"marks in maths is "<<maths<<endl
    <<"marks in physics is "<<physics<<endl;
  }
};
void exam::setdata2(float m1,float p1)
{
  maths=m1;
  physics=p1;
}
class result:public exam{
public:
  void percentage()
  { 
    getdata();
    getdata2();
    cout<<"percentage obtained is "<<(maths+physics)/2<<"%"<<endl;
  }

};

int main()
{
 cout<<"-------------Student result details----------------"<<endl;
 result r1;
 r1.setdata(234);
 r1.setdata2(96,98);
 r1.percentage();
}