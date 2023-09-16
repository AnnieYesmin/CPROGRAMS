/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include <stdio.h>
#include<stdlib.h>

//void sort_names(char (*)[20], int);

int my_strlen(char*);
void swap(char*,char*);
int my_strcmp(char*, char*);

int main()
{
    char (*str)[20];
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    str=malloc(size*sizeof(20));
    for(int i=0;i<size;i++){
	printf("[%d] -> ",i);
	scanf("%s",str[i]);
    }
for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        { 
	    if((my_strcmp(str[j],str[j+1]))>0)
	    {
		swap(str[j],str[j+1]);
	    }
}
}
printf("After Operation :\n");
for(int i=0;i<size;i++){
    printf("[%d] -> %s\n",i,str[i]);
}
}



int my_strlen(char *str){
   int count=0;
    while(str[count]!='\0'){
	count++;
    }
    return count;
}
void swap(char *str1,char* str2){
    int len=(my_strlen(str1)>my_strlen(str2))?my_strlen(str1):my_strlen(str2);
    for(int i=0;i<len+1;i++){
	char temp=str1[i];
	str1[i]=str2[i];
	str2[i]=temp;
    }
}
int my_strcmp(char *str1, char *str2){
    int i,len=(my_strlen(str1)>my_strlen(str2))?my_strlen(str1):my_strlen(str2);
    for(i=0;i<len;i++){
      if(str1[i]>str2[i]){
	  break;
    }
      else if(str1[i]<str2[i]) return 0;
    }
    if(str1[i]>str2[i]){
	return 1;
    }
    else return 0;

}
