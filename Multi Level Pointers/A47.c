/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include<stdio.h>
#include <stdlib.h>
void print(void *ptr,int i){
    if(i==4){
	printf("%X",*((int *)ptr));
    }
    if(i==2){
	printf("%hX",*((short *)ptr));
    }
}	
int main()
{
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    if(size==2){
	void *ptr=malloc(size);
	scanf("%hx",(short*)ptr);
	char temp;
	temp=*((char *)ptr);
	*((char *)ptr)=*((char *)ptr+1);
	*((char *)ptr+1)=temp;
	print(ptr,2);
    }
    if(size==4){
	void *ptr=malloc(size);
	scanf("%x",(int*)ptr);
	char temp;
	temp=*((char *)ptr);
	*((char *)ptr)=*((char *)ptr+3);
	*((char *)ptr+3)=temp;

	temp=*((char *)ptr+1);
	*((char *)ptr+1)=*((char *)ptr+2);
	*((char *)ptr+2)=temp;

	print(ptr,4);
    }
    return 0;
}

