// components of stl----containers,algorithm,iterator
// containers are prebuilt data structures in cpp,object to store data 
// algorithm----set of rules for manupulating data in containers
// iterator----points to the element of a container,connects algorithm with the container,used to iterate data  in containers
/*types of data structures  in cpp are---
sequential         derived                  associative
array              stack                    set 
vector             queue                    multiset
list               priority queue           map 
deque                                       multimap 
*/
// sequential continers----1.vectors--size modifies automatically same as an array 
                                    // slow insertion and deletion.
                                    // faster random access 
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v1;
  cout<<"no element inserted "<<endl;
  cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  v1.push_back(5);
  cout<<"element inserted "<<endl;
    cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  cout<<"element inserted "<<endl;
  v1.push_back(5);
      cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  cout<<"element inserted "<<endl;
  v1.push_back(6);
  cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  cout<<"element inserted "<<endl;
  v1.push_back(7);
      cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  cout<<"element inserted "<<endl;
  v1.push_back(8);
      cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  cout<<"element inserted "<<endl;
  v1.push_back(9);
      cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  cout<<"element inserted "<<endl;
  v1.push_back(10);
  cout<<"capacity "<<v1.capacity()<<endl;
  cout<<"size "<<v1.size()<<endl;
  for(int i=0;i<v1.size();i++)
  {
    cout<<"element is "<<v1[i]<<endl;
  }
  v1.pop_back();
  v1.pop_back();
  for(int i=0;i<v1.size();i++)
  {
    cout<<"element is "<<v1[i]<<endl;
  }
  v1.push_back(10);
  v1.push_back(10);
  v1.push_back(10);
  v1.push_back(10);   //when vector overflows it creates another vector of twice the capacity(8*2) of previous one 
  cout<<v1.capacity()<<endl;
  cout<<v1.size()<<endl;
  return 0;

}