#include<iostream>
#include<string.h>
using namespace std;

class bin
{
private:
  string n;
public:
  void setdata();
  void com();
  
  void chk_bin()
  {
    int i;
    int count=0;
    for(i=0;i<n.length();i++)
    {
      if((n[i]=='1')||(n[i]=='0'))
      { 
        
        continue;
      }
      else
        {cout<<"not binary";
        count=1;
        exit(0);}
    }
    if (count==0)
      cout<<"binary";
  }
};

void bin::setdata()
  {cout<<"enter the number: ";
   cin>>n;
  }
  void bin::com()
  { chk_bin();             //nested member function
    cout<<"n before compliment: "<<n;
    int i;
    for(i=0;i<n.length();i++)
    {
      if(n[i]=='1')
      {
        n[i]='0';
      }
      else{
        n[i]='1';
      }
    }
    cout<<"after compliment: "<<n;
  }
int main()
{
 bin O1;
 O1.setdata();
 O1.com();
}