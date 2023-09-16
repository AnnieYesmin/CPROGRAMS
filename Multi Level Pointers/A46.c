/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include <stdio.h>
#include <stdlib.h>

float variance(int *ptr,int);

int main()
{
    int n;
    void *ptr;
    printf("Enter the number of elements");
    scanf("%d", &n);
    float var=variance(ptr,(n));
    printf("Variance is %f\n",var);
   return 0; 
}
float variance( int *ptr,int n){
    int sum=0;
    ptr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
	printf("[%d] ->",i);
	scanf("%d",(ptr+i));
	sum=sum+*(ptr+i);
    }
    float mean=sum/n;
    float sum1=0;
    for(int i=0;i<n;i++){
	*(ptr+i)=*(ptr+i)-mean;
	*(ptr+i)=(*(ptr+i))*(*(ptr+i));
	sum1=sum1+*(ptr+i);
    }
    return sum1/n;
}

