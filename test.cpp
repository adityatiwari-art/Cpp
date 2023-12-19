#include <bits/stdc++.h>
#include <bitset>
void showbits(unsigned char);
using namespace std;
int main()
{
    unsigned char num = 225, k;
    unsigned char num1 = 173;
    unsigned char num2 = 32;
    printf("\nthe decimal equivalent of num is %d and binary equivalent is ", num);
    showbits(num);

    k = ~num;
    printf("\nones complement is ");
    showbits(k);

    k = num >> 1;
    printf("\nright shift is ", num);
    showbits(k);

    k = num << 2;
    printf("\nleft shift is ", num);
    showbits(k);

    // 2nd operator is called as mask
    printf("\nnum1 is "); 
    showbits(num1);
    printf("\nleft shift is ");
    showbits(num2);

    printf("\n& is ", num2);
    k = num1 & num2;
    showbits(k);
    printf("\n| is ", num2);

    k = num1 | num2;
    showbits(k);

    printf("\n^ is ", num2);
    k = num1 ^ num2;
    showbits(k);
}
// functions to show binary equivalent of a 8bit or 1byte number i.e. it can only be a char
void showbits(unsigned char num)
{
    int n = num;

    unsigned char k, andmask;
    for (int i = 7; i >= 0; i--)
    {
        k = 1 << i;
        andmask = num & k;
        andmask == 0 ? printf("0") : printf("1");
        // and operation is used to tell the state of each bit in each iteration
        // for i=7
        // let number be 10=00001010
        // so k=1<<7 i.e.10000000 ,now and operation on both will give zero if the seventh bit is 0 otherwise nonzero
        // or =k so using this the bit value in num can be find at seventh pos same for all iterations
    }
}

// #include <iostream>
// #include <bitset>

// void showbits(unsigned char);

// int main() {
//     unsigned char num = 225, k;

//     printf("\nThe decimal equivalent of num is %d and the binary equivalent is ", num);
//     std::bitset<sizeof(unsigned char) * 8> binaryRepresentation(num);
//     std::cout << binaryRepresentation << std::endl;

//     k = ~num;
//     printf("\nOnes complement is ");
//     std::bitset<sizeof(unsigned char) * 8> binaryRepresentation1(k);
//     std::cout << binaryRepresentation1 << std::endl;

//     k = num >> 1;
//     printf("\nRight shift is ");
//     std::bitset<sizeof(unsigned char) * 8> binaryRepresentation2(k);
//     std::cout << binaryRepresentation2 << std::endl;

//     k = num << 2;
//     printf("\nLeft shift is ");
//     std::bitset<sizeof(unsigned char) * 8> binaryRepresentation3(k);
//     std::cout << binaryRepresentation3 << std::endl;

//     std::cout << "hello" << std::endl;

//     return 0;
// }
