#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char str1[] = "Hello Geeks!";
    char str2[] = "GeeksforGeeks";
    strcpy(str2, str1);
    char s[]="geeksforgeeks";
    strcpy(s,str1);  
    //string s;
    //strcpy(s,str1); error because s is a char pointer and not a string. strcpy requires two string 
    //Note:string s meaning and use of strcpy
    cout << "str1: " << str1 << "\nstr2: " << str2;
    string p;
    // cin>>p;   //let input be i am the learing lad
    // cout<<p;  // i
    // fflush(stdin); //ckears the buffers and asks for input
    // cin>>p;   //takes buffer as input
    // cout<<p;  // am
    // cin>>p;   //takes buffer as input
    // cout<<p;  //the 
    // cin>>p;   //takes buffer as input
    // cout<<p;  //learning 
    // cin>>p;   //takes buffer as input
    // cout<<p;  //lad 
    // cin>>p;   //takes buffer as input
    // cout<<p;  //anything you entered
    string b;
    getline(cin,b);
    cout<<b;
    return 0;
}