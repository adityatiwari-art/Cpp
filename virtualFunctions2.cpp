#include <iostream>
#include <cstring>
using namespace std;
class cwh
{
  public:
    string title;
    float rating;
    cwh(string t,float r){
    title=t;
    rating=r;
    }
    virtual void get_cwh(){
      cout<<"bogus code"<<endl;
    }
};
class cwhvideo:public cwh
{
 public:
 float vid_length;
 cwhvideo(string t,float r,float v):cwh(t,r)
 {
  vid_length=v;
 }
 void get_cwh(){
  cout<<"title is "<<title<<endl;
  cout<<"rating is "<<rating<<endl;
  cout<<"vid length is "<<vid_length<<" mins"<<endl;
 }
};
class cwhtext:public cwh
{
 public:
 int text_size;
 cwhtext(string t,float r,int s):cwh(t,r)
 {
  text_size=s;
 }
  void get_cwh(){
  cout<<"title is "<<title<<endl;
  cout<<"rating is "<<rating<<endl;
  cout<<"text size is "<<text_size<<" words"<<endl;
 }
};
int main()
{
cwh* ptr[2];  // array of pointers

char s[]="abhishek";
strcpy(s,"aditya");
cout<<s<<endl<<endl<<endl;

cwhvideo O1("Django",4.8,22);
cwhtext O2("virtual functions",4.82,300);
ptr[0]=&O1;
ptr[1]=&O2;
// ptr[0]->get_cwh();   //EB so type matters i.e cwh
// ptr[1]->get_cwh();   //EB so type matters i.e cwh
ptr[0]->get_cwh();      //LB so value matters i.e cwh_video
ptr[1]->get_cwh();      //LB so value matters i.e cwh_text
}