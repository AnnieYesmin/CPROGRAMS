/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include<stdio.h>
#define SIZEOF(X) (char*)(&X+1)-(char*)(&X)
int main(){
    int num1;
    printf("Size of int: %zu\n",SIZEOF(num1));
    short num2;
    printf("Size of short int: %zu\n",SIZEOF(num2));
    long int num3;
    printf("Size of long int: %zu\n",SIZEOF(num3));
    long long int num4;
    printf("Size of long long int: %zu\n",SIZEOF(num4));
    float num5;
    printf("Size of float: %zu\n",SIZEOF(num5));
    double num6;
    printf("Size of double: %zu\n",SIZEOF(num6));
    long double num7;
    printf("Size of long double: %zu\n",SIZEOF(num7));
    unsigned int num8;
    printf("Size of unsigned int: %zu\n",SIZEOF(num8));
    char num9;
    printf("Size of char: %zu\n",SIZEOF(num9));
    return 0;
}

