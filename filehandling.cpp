#include <iostream>
#include<fstream>
using namespace std;
int main()
{string s2;
 ofstream out("sample.txt"); //writting 
 out<<"hello aditya welcome to sample.txt ";
 out.close();
 ifstream in("sample.txt"); //ifstream not instream or istream  Reading
in>>s2;          //extraction operator takes only word before space 
//extraction operator takes only word before space 
//  cout<<s2;        //value at s2 modified 
getline(in,s2);
cout<<s2;
in.seekg(2,ios_base::cur);
getline(in,s2);
cout<<s2;
}
// constant member function