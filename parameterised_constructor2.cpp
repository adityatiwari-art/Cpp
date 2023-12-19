#include <iostream>
#include <math.h>
using namespace std;
class point
{
private:
 int x,y;
public:
 point(int a,int b)
 {
  x=a;
  y=b;
 }
 void displaypoint()
 {
  cout<<"your point is: ("<<x<<","<<y<<")"<<endl;
 }
 void distance(point p,point q)
 {
  float dist;
  dist=sqrt(pow((p.x-q.x),2)+pow((p.y-q.y),2));
  cout<<"distance between these two point is: "<<dist<<endl;
 }
};
int main()
{ point r(4,5);   //you cant leave this  object as uninitialised because you have declared parameterised constructor and need to initialise this object using the same or what you can do is declare a default constructor 
  point p=point(3,4);
  p.displaypoint();
  point q(7,8);
  q.displaypoint();
  r.distance(p,q);
}
