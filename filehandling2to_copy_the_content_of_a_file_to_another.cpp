//can open two file in different mode or in same mode without closing the other but need to close the same  file if you need to work in different mode 
// null character of string is not stored in a file 
// you cant use the same object name for diferent class inspite of file being closed 
//when file closes the data moves to the disk from the ram and hence is saved for furthur 
// A file is automatically closed when a program terminates, so there is never a need toclose a file. Answer: FalseExplanation: The statement of the problem is not quite accurate. A program willclose a file only if the program terminates normally. if the program is struck in between then the file at disk will not get modified for example using getch ,cin etc prohibits the program to terminate until a data is entered causing the file to be of size zero or un modified  until the program terminates or the file is closed 
#include <iostream>
using namespace std;
#include <fstream> //ifstream and ofstream giving error
// to copy the contents of a file to another
#include <conio.h>
int main()
{
  // You can use forward slashes ( / ) instead of backward slashes ( \ ) on Windows (as is the case with Linux® and UNIX). If you use backward-slashes, the file name on Windows might be treated as a relative-path instead of an absolute-path.
  ifstream fin("C:/Users/ADITYA TIWARI/OneDrive/Desktop/New folder (2)/sample2.txt.txt");
  ofstream out("sample.txt");
  string data;
  // fin>>data;
  // cout<<data; 
  while(fin.eof()==0)
  {
    getline(fin,data);
    out<<data;   //inputs everytime it gets data
  }
  cout<<data;//last overwritten value in data
  fin.close();
  out.close();
  
  // ofstream out2;
  // out2.open("sample2.txt",ios::binary);
  // out2<<"hello\naditya";            //file size is  12 bytes (12 bytes)   null character not stored
  // getch();
  // out2.close();
  // overwrites the file 

}
// if file is not closed it will be unaltered at the location in the disk (it can be closed automatically(when the program terminated) or manually(using close) )
