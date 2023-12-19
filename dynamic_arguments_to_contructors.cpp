#include <iostream>
using namespace std;
class bankdeposit
{
private:
  int principal;
  int year;
  float returnvalue;
  float interest;
public:
  bankdeposit(int p,int y,float r);
  bankdeposit(int p,int y,int R);

  
  
  void show()
  {
    cout<<"final amount after"<<year<<"years is:"<<returnvalue<<endl;
  }

  
 
};
bankdeposit::bankdeposit(int p,int y,float r)
  {
    principal=p;
    year=y;
    interest=r;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
      returnvalue=returnvalue+returnvalue*interest;
      
    }
  }
bankdeposit::bankdeposit(int p,int y,int R)
  {
    principal=p;
    year=y;
    interest=float(R)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
      returnvalue=returnvalue*(1+interest);
      
    }
  }
int main()
{int p,y,R;
float r;
 cout<<"enter p y r(float):"<<endl;
 cin>>p>>y>>r;
 bankdeposit b1(p,y,r);   //if you will directly put the value of arguments then it is giving error but taking input doesnot(only in float type argument)
 b1.show();
  cout<<"enter p y R(int):"<<endl;
 cin>>p>>y>>R;
 bankdeposit b2(p,y,R);
 b2.show();
 
}