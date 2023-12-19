#include <iostream>
using namespace std;
class complex{
  int real,img;
public:
   complex(){}
   complex(int a,int b){
    real=a;
    img=b;
   }
   void getcomplex()
   {
    cout<<real<<"+i"<<img<<endl;
   }
   complex operator +(complex c){
     complex temp;
     temp.real=real+c.real;
     temp.img=img+c.img;
     return temp;
   }
     complex operator -(complex c){
     complex temp;
     temp.real=real-c.real;
     temp.img=img-c.img;
     return temp;
   }
     void operator ++(){
     real++;
     img++;
   }
      void operator --(){
     real--;
     img--;
   }
};
int main()
{
  complex c1(3,4); 
  complex c2(6,1);
  // overload + in such a way that it takes two complex class objects as operands and  add the corresponding real and imginery parts of the complex number and store the result in another object c3 
  complex c3,c4(3,6);
  c3=c1+c2;
  c3.getcomplex();
  ++c4;   //preincrement doesnot takes any argument in overloading function you cant write c4++ for the same 
  c4.getcomplex();
  --c4;
  c4.getcomplex();
  complex c5,c6(4,5),c7(2,6);
  c5=c6-c7;
  c5.getcomplex();
  c3=c1+c2+c4;  //same works for3 also
  c3.getcomplex();
} 