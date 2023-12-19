// Try chat gpt for doubts
#include <iostream>
using namespace std;
template<class T=int,class M=float>

class vector{
  T a,b,c;
  public:
  friend vector<> crossproduct(vector <>O1,vector <>O2);
  void setvector()
  {
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
  }
  void getvector()
  {
    cout<<"your vector is "<<a<<"i + "<<b<<"j + "<<c<<"k"<<endl;
  }
}; 
// demonstration of template in friend function whe ever you will write the class name angular bracket with the template parameter is must
vector<> crossproduct(vector<> O1,vector <>O2)
{
  vector<>o3;
  o3.a=(O1.b*O2.c-O1.c*O2.b);
  o3.b=-(O1.a*O2.c-O1.c*O2.a);
  o3.c=(O1.a*O2.b-O1.b*O2.a);
  return o3;
}
int main()
{
vector<> o1,o2,o3;   //if no angular brackets are used inspite of not using the template parameter then it will raise error so if template is specified then <> is must 
o1.setvector();
o2.setvector();
o1.getvector();
o2.getvector();
o3=crossproduct(o1,o2);
o3.getvector();
}