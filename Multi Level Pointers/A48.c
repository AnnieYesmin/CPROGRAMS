/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void magic_square(int **, int);

int main()
{
int size;
printf("Enter a number: ");
scanf("%d",&size);
if(size<0 || size%2==0){
    printf("Error : Please enter only positive odd values\n");
    exit(0);
}
int **ptr;
magic_square(ptr,size);
return 0;
}
void magic_square(int **ptr,int size)
{
    ptr=malloc(size*sizeof(int*));
    for(int i=0;i<size;i++)
    {
	ptr[i]=calloc(size,sizeof(int));
    }
    int rows=0;
    int cols=size/2;
    ptr[rows][cols]=1;
    for(int i=2;i<=(size*size);i++)
    {
	rows=(rows-1==-1)?size-1:rows-1;
	cols=(cols+1)%size;
	if(ptr[rows][cols]==0)
	{
	    ptr[rows][cols]=i;
	}
	else
	{
	    rows=(rows+2)%size;
	    cols=(cols-1==-1)?size-1:cols-1;
	    if(ptr[rows][cols]==0)
	    {
		ptr[rows][cols]=i;
	    }
	}
    }
    for(int rows=0;rows<size;rows++)
    {
	for(int cols=0;cols<size;cols++)
	{
	    printf("%4d", ptr[rows][cols]);
	}
	printf("\n");

    }
}

