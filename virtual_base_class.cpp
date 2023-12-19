// care must be take while using seperate objects otherwise can give garbage value if not initialsed properly
// therfore use a single derived class object only and no separate base class object
#include <iostream>
using namespace std;
class student 
{
  public:
  int rollno;
  void getrollno(int a)
  {
  rollno=a;
  }
};
class test:public virtual student{
  public:
  int mark1;
  int mark2;
  void getmarks1(int a,int b)
  {
  rollno=1;
  mark1=a;
  mark2=b;
  }
};
class sports:public virtual student{
  public:
  int sport_mrk1;
  int sport_mrk2;
  
  void getmarks2(int a,int b)
  {
  rollno=3;
  sport_mrk1=a;
  sport_mrk2=b;
  }
};
class result:public test,public sports{
 public:
 int percentage;
 void details()
 {
  cout<<"rollno: "<<rollno<<endl;
  cout<<"mark1: "<<mark1<<endl;
  cout<<"mark2: "<<mark2<<endl;
  cout<<"sport_mrk1: "<<sport_mrk1<<endl;
  cout<<"sport_mrk2: "<<sport_mrk2<<endl;
 }
 void show_result()
 {
  percentage=(mark1+mark2+sport_mrk1+sport_mrk2)/4;
  cout<<"\n\nresult\n\n";
  cout<<"percentage is:"<<percentage<<endl;
 }
};
int main()
{student aditya;
result r1;
r1.getrollno(123);
test mst;
r1.getmarks1(90,90);
sports cricket;
r1.getmarks2(90,90);  //since getmarks2 is called at last so 1 made by getmarks1 is overwriiten by 2 because it was the same value because of single copy created
r1.details();
r1.show_result();
cout<<"value of rollno at test initialy was 1 then value of roll no at sport was 3 then the value of rollno at test became 3 when printed as you can see:"<<r1.test::rollno<<endl;  
//value also modified at test because single copy created

}