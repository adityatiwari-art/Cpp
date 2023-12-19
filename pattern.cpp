#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//   int i, j;
//   for (i = 1; i <= 4; i++)
//   {
//     int count =i;
//     for (j = 1; j <= i; j++)
//     {
//       cout<<count--;
//     }
//     cout<<endl;
//   }
// }
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// a
// a b
// a b c
// a b c d
// int main()
// {
//   int i, j;
//   for (i = 1; i <= 4; i++)
//   {
//     int character = 97;
//     for (j = 1; j <= i; j++)
//     {
//       cout << char(character)<<" ";
//       character++;
//     }
//   cout << endl;
//   }
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// row-1 spaces at start then--
// star=row
// int main()
// {
//   int i, j, k,row=4;
//   for (i = 1; i <=4; i++)
//   {
//     for (k = 1; k <= row-1; k++)
//     {
//       cout<<" ";
//     }
//     for (j = 1; j <= i; j++)
//     {
//       cout<<"* ";
//     }
//     row--;
//     cout<<endl;
//   }
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// row-1 spaces at start then--
// star=row
// int main()
// {
//   int i, j, k, row = 4;
//   for (i = 1; i <= 4; i++)
//   {
//     for (k = 1; k <= row - 1; k++)
//     {
//       cout << " ";
//     }
//     for (j = 1; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     row--;
//     cout << endl;
//   }
//   row = 2;

//   // i>=4
//   for (i = 3; i >= 1; i--)
//   {
//     for (k = 1; k <= row - 1; k++)
//     {
//       cout << " ";
//     }

//     for (j = 1; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     row++;
//     cout << endl;
//   }
// }  
//    *********
//   *********
//  *********
// *********
// int main()
// {
//   int i, j, k,row=4;
//   for (i = 1; i <= 4; i++)
//   {
//     for (k = 1; k <= row; k++)
//     {
//       cout<<" ";
//     }
//     for (j = 1; j <= 9; j++)
//     {
//     cout<<"* ";
//     }
//     row--;
//     cout<<endl;

//   }  
// }

// a
// bc
// cde
// defg
// int main()
// {
//   int i,j;
//   char letter='A';
//   for (i = 1; i <=4; i++)
//   {
//     char letter2=letter;
//     for ( j = 1; j <=i; j++)  
//     {
//       cout<<letter2;
//       letter2++;
      

//     }
//     letter=letter+1;           
//     cout<<endl;
//   }
// }
  



