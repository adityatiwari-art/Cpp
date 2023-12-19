#include <iostream>
using namespace std;
#include <fstream> 
int main()
{
  ifstream fin("C:/Users/ADITYA TIWARI/OneDrive/Desktop/New folder (2)/sample2.txt.txt");
  ofstream out("sample.txt");
  string data;

  while(fin.eof()==0)
  {
    getline(fin,data);
    out<<data;   
  }
  cout<<data;
  fin.close();
  out.close();
}
// cout<<out.tellp();
// cout<<in.tellg();
// in.seekg(pos,ios_base::beg or cur or end);
// out.seekp(pos,ios_base::beg or cur or end);
// out.seekp(pos);