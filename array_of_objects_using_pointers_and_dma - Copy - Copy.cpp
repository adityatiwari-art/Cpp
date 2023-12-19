
// always remember to specify access modifiers in class you always forget to specify in
#include<iostream>
using namespace std;
class character{
  string name;
  int id;
  float wealth;
  public:
  void setData(string n,int a,int b)
  { 
    name=n;
    id=a;
    wealth=b;
  }
  void getData(void)
  {
    cout<<"name of character is"<<name<<endl;
    cout<<"id of character is"<<id<<endl;
    cout<<"wealth of character is"<<wealth<<endl;
  }
};

int main()
{
character *ptr=new character[3];
int b,c;
character *ptrTemp=ptr; //*********** value at ptr is itself an address no need of address operator because address operator will give the address of p not of the value stored in p(i.e the first object address)
string a;
for(int i=0;i<3;i++)
{
cout<<"enter the name, id and wealth of the character:";
cin>>a>>b>>c;
ptr->setData(a,b,c);
ptr++;
}

for(int i=0;i<3;i++)
{
ptrTemp->getData();
ptrTemp++;
}
}