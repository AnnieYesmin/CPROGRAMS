/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include<stdio.h>
#include <stdlib.h>
void display(void *ptr,int flag_char1,int flag_char2,int flag_short,int flag_int,int flag_float,int flag_double){
    if(flag_char1==1)
    {
	printf("0 -> %c\n",*((char *) ptr) );
    }
    if(flag_char2==1)
    {
	printf("1 -> %c\n",*((char *) ptr+1));
    }
    if(flag_short==1)
    {
	printf("2 -> %hi\n",*((short *)ptr+1));
    }
    if(flag_int==1)
    {
	printf("4 -> %d\n",*((int *)ptr+1));
    }
    if(flag_float==1)
    {
	printf("4 -> %f\n",*((float *)ptr+1));
    }
    if(flag_double==1)
    {
	printf("0 -> %lf\n",(*(double *)ptr));
    }
}
int main()
{
    int flag_char1=0,flag_char2=0,flag_short=0,flag_int=0,flag_float=0,flag_double=0;
    int oper,type;
    void *ptr=malloc(8);
    while(1)
    {
	printf("Enter the choice :\n"
		"1. Add element\n"
		"2. Remove element\n"
		"3. Display element\n"
		"4. Exit from the program\n");
	scanf("%d",&oper); 
	switch(oper){
	    case 1:
		printf("Enter the type you have to insert: \n");
		printf("1. char\n"
			"2. short\n"
			"3. int\n"
			"4. float\n"
			"5. double\n");
		scanf("%d",&type);
		switch(type){
		    case 3:
			if(flag_int==0 && flag_float==0 && flag_double==0)
			{
			    printf("Enter the element: ");
			    scanf("%d",(int*)ptr+1);
			    flag_int=1;
			}
			else
			    printf("Dont have enough space to store\n");
			break;
		    case 1:
			getchar();
			if(flag_char1==0 && flag_double==0){
			    printf("Enter the element: ");
			    scanf("%c",(char*)ptr);
			    flag_char1=1;
			}
			else if(flag_char2==0 && flag_double==0){
			    printf("Enter the element: ");
			    scanf("%c",(char*)(ptr+1));
			    flag_char2=1;
			}
			else
			    printf("Dont have enough space to store");
			break;
		    case 4:
			if(flag_float==0 && flag_int==0 && flag_double==0)
			{
			    printf("Enter the element: ");
			    scanf("%f",(float*)ptr+1);
			    flag_float=1;
			}
			else
			    printf("Dont have enough space to store");
			break;
		    case 2:
			if(flag_short==0 && flag_double==0){
			    printf("Enter the element: ");
			    scanf("%hi",(short*)ptr+1);
			    flag_short=1;
			}
			else
			    printf("Dont have enough space to store");
			break;
		    case 5:
			if(flag_double==0 && flag_char1==0 && flag_char2==0 && flag_int==0 && flag_short==0 && flag_float==0){
			    printf("Enter the element: ");
			    scanf("%lf",(double*)ptr);
			    flag_double=1;
			}
			else
			    printf("Dont have enough space to store");
			break;
		}
		break;
	    case 3:
		display(ptr,flag_char1,flag_char2,flag_short,flag_int,flag_float,flag_double);
		break;
	    case 2:
		display(ptr,flag_char1,flag_char2,flag_short,flag_int,flag_float,flag_double);
		int choice;
		printf("Enter the index value to be deleted");
		scanf("%d",&choice);
		if(choice==4){
		    flag_int=0;
		    flag_float=0;
		}
		if(choice==0 && flag_double==1)
		    flag_double=0;
		if(choice==0 && flag_double==0)
		    flag_char1=0;
		if(choice==1)
		    flag_char2=0;
		if(choice==2)
		    flag_short=0;
		break;
	    case 4:
		exit(0);
	}
    }
    return 0;
}
