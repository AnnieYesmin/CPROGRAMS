/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include<stdio.h>

#define SWAP(t,x,y)   \
{\
    t temp;\
    temp=x;\
    x=y;\
    y=temp;\
}\


int main(){
    int choice;
    printf("Enter the choice of data type\n"
	    "1.int\n"
	    "2. char\n"
	    "3. short\n"
	    "4. float\n"
	    "5. double\n"
	    "6. string\n");
    scanf("%d",&choice);
    switch(choice)
    {
	case 1:
	    int num1,num2;
	    printf("Enter the num1:");
	    scanf("%d",&num1);
	    printf("Enter the num2");
	    scanf("%d",&num2);
	    SWAP(int, num1,num2);
	    printf("After Swapping:\n");
	    printf("num1:%d\n",num1);
	    printf("num2:%d\n",num2);
	    break;
	case 2:
	    char char1,char2;
	    scanf("%c",&char1);
	    scanf("%c",&char2);
	    SWAP(char, char1,char2);
	    printf("After Swapping:\n");
	    printf("Char1:%c\n",char1);
	    printf("Char2:%c\n",char2);
	    break;
	case 3:
	    short snum1,snum2;
	    scanf("%hd",&snum1);
	    scanf("%hd",&snum2);
	    SWAP(short int, snum1,snum2);
	    printf("After Swapping:\n");
	    printf("Short 1:%hd\n",snum1);
	    printf("Short 2:%hd\n",snum2);
	    break;
	case 4:
	    float fnum1,fnum2;
	    scanf("%f",&fnum1);
	    scanf("%f",&fnum2);
	    SWAP(float, fnum1,fnum2);
	    printf("After Swapping:\n");
	    printf("Float1:%f\n",fnum1);
	    printf("Float2:%f\n",fnum2);
	    break;
	case 5:
	    double lfnum1,lfnum2;
	    scanf("%lf",&lfnum1);
	    scanf("%lf",&lfnum2);
	    SWAP(double, lfnum1,lfnum2);
	    printf("After Swapping:\n");
	    printf("double 1:%lf\n",lfnum1);
	    printf("double 2:%lf\n",lfnum2);
	    break;
	case 6:
	    char *str1,*str2;
	    scanf("%s",str1);
	    scanf("%s",str2);
	    SWAP(char*, str1,str2);
	    printf("After Swapping:\n");
	    printf("str1:%s\n",str1);
	    printf("Str2:%s\n",str2);
	    break;
    }
    return 0;
}

