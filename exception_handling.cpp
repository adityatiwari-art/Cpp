// abnormal behavior or  runtime error is called exceptions(off beat situation) 
// throwing single value 
#include <iostream>
using namespace std;
// int main()
// {
//   int age;
//   cin>>age;
//   try{
//     if(age>24)
//        cout<<"allowed to drink";
//     else
//       throw age; 
//   }
//   catch(int a)
//   {
//     cout<<"not allowed to drink"<<endl;
//     cout<<a;
//   }

// }
// division by zero
// int main()
// {
//   float num;
//   float deno;
//   cout<<"enter num and deno";
//   cin>>num>>deno;
//   try{
//     if(deno==0)
//        throw 0;// if no value thrown then terminate called  
//     else
//        cout<<"quotient is "<<num/deno;   
//   }
//   catch(float)
//   {   
//   cout<<"division by zero not possible";
//   exit(0);
//  }
// }
// factorial of negative number
// int main()
// {
//   int num;
//   cin>>num;
//   try{
//     if(num<0)
//        throw num;
//        else{
//         int fact=num;
//         while (num>1)//if num>0 then if num=1 then also satisfies then fact*(num-1)=0 will happen
//         {
//         fact=fact*(num-1);
//         --num;
//         }
//         cout<<fact;
//        }
//   }
//   catch(int)
//   {
//     cout<<"factorial of negative number doesn't exist\n";
//   }
// }

// int main()
// {
//   try{
//     throw "sffsfd";
//   }
//   catch(char const*)          // char const*  curly braces are must in catch
//     { 
//       cout<<"welcome to catch";
//       cout<<"char";
//     }
    // catch(string)
    // {
    // }
// }
// how to catch string value 
// When an exception is thrown, all objects created inside the enclosing try block are destroyed before the control is transferred to the catch block.
// class test{
//   public: int a;
//   test()
//   {
//     cout<<"base constructor called\n";
//   }
//   ~test()
//   {
//     cout<<"base destructor called\n";
//   }
// };
// class derived:public test{
//   public: 
//   derived()
//   {
//     cout<<"derived constructor called\n";
//   }
//   ~derived()
//   {
//     cout<<"derived destructor called\n";
//   }
// };
// int main()
// {
// try
// {
// derived t1;  // since the scope of this object is within this bloc therefore it destructs here 
//   throw 10;
//   cout<<"value thrown";
// }
// catch(int)
// {
//   cout<<"caught\n";
// }

// }
// If both base and derived classes are caught as exceptions, then the catch block of the derived class must appear before the base class. 
// If we put the base class first then the derived class catch block will never be reached. For example, the following C++ code prints “Caught Base Exception“ .
// C++ Program to demonstrate a
// Catching Base Exception
#include <iostream>
using namespace std;
 
// class Base {
// };
// class Derived : public Base {
// };
// int main()
// {
//     Derived d;   //object of derived can be treated as object of both classes 
//     // Some other functionalities
//     try {
//         // Monitored code
//         throw d;  // the catch first matches will execute 
//     }
//     catch (Base b) {  //base above executed first because of sequential execution of sttatements with warning 
//         cout << "Caught Base Exception";
//     }
//     catch (Derived d) {
//         // This 'catch' block is NEVER executed because above one is executed already
//         cout << "Caught Derived Exception";
//     }
//     getchar();
//     return 0;
// }
// #include <iostream>
// using namespace std;
 
// class Base {
// };
// class Derived : public Base {
// };
// int main()
// {
//     Derived d;   //object of derived can be treated as object of both classes 
//     // Some other functionalities
//     try {
//         // Monitored code
//         throw d;  // the catch first matches will execute 
//     }
//     catch (Derived d) {//above executed first because of sequential execution of statements
//         cout << "Caught Derived Exception";
//     }
//     catch (Base b) {  
//         // This 'catch' block is NEVER executed because above one is executed already
//         cout << "Caught Base Exception";
//     }
//     getchar();
//     return 0;
// }
#include <iostream>
using namespace std;
 
class Base {
};
class Derived : public Base {
};
int main()
{
    Base b;   //object of derived can be treated as object of both classes 
    try {
        throw b;  // the catch first matches will execute 
    }
    catch (Base b) {  
    
        cout << "Caught Base \
        ";
    }
    catch (Derived d) {
        cout << "Caught Derived Exception";
    }
    getchar();
    return 0;
}