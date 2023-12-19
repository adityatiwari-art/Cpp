#include<iostream> 
using namespace std;
class Enclosing{      
   private:   
       int x;
   public:    
   class Nested {
      int y;   
      void NestedFun(Enclosing *e) {
        cout<<(e->x);  
      }       
   };
    void EnclosingFun() {
        cout<<y;  
      } 
};   
int main()
{     
 Enclosing::Nested n1;
}