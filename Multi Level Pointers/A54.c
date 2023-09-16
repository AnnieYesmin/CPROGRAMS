/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct  Student{
    int id;
    char Name[20];
    int *subjects_marks;
};
void first_lines(int Subject_Count,char *Subject_Names[]){
   printf("%-15s%-15s","Roll No.","Name");
    for(int i=0;i<Subject_Count;i++){
	printf("%-15s",*(Subject_Names+i));
	    }
	    printf("%-15s%-15s\n","Average","Grade");
}

float Average(int *ptr,int count){
    float sum=0;
    for (int i=0;i<count;i++){
	sum=sum+ptr[i];
    }
    return sum/count;
}
char Grade(int Average){
    switch(Average){
	case 91 ... 100:
	    return 'A';
	    break;
	case 81 ... 90:
	    return 'B';
	    break;
	case 71 ... 80:
	    return 'C';
	    break;
	case 61 ... 70:
	    return 'D';
	    break;
	case 51 ... 60:
	    return 'E';
	    break;
	default:
	    return 'F';
    }
}
void print_data(struct Student s,int Subject_Count){
    printf("%-15d%-15s",s.id,s.Name);
    for(int j=0;j<Subject_Count;j++){
	printf("%-15d",s.subjects_marks[j]);
    }
    printf("%-15f%-15c\n",Average(s.subjects_marks,Subject_Count),Grade(Average(s.subjects_marks,Subject_Count)));
}

int main()
{
    int Student_Count, Subject_Count;
    printf("Enter no.of students : ");
    scanf("%d",&Student_Count);
    printf("\nEnter no.of subjects : ");
    scanf("%d",&Subject_Count);
    char *Subject_Names[Subject_Count];
    for(int i=0;i<Subject_Count;i++){
	Subject_Names[i]=malloc(20);
	printf("\nEnter the name of subject %d : ",i+1);
	scanf("%s",Subject_Names[i]);
    }
    struct Student s[Student_Count];
    for(int i=0;i<Student_Count;i++){
	printf("----------Enter the student details-------------\n");
	printf("Enter the student Roll no. : ");
	scanf("%d",&s[i].id);
	printf("Enter the student %d Name: ",s[i].id);
	scanf("%s",s[i].Name);
	s[i].subjects_marks=malloc(sizeof(int)*Subject_Count);
	for(int j=0;j<Subject_Count;j++){
	    printf("Enter %s marks : ",Subject_Names[j]);
	    scanf("%d",&s[i].subjects_marks[j]);
	}
    }
	char t;
	//while(t=='Y' || t=='y')
	do
	{
	    printf("----Display Menu----\n");
	    printf("1. All student details\n" "2. Particular student details\n");
	    printf("Enter your choice: ");
	    int Choice1;
	    scanf("%d",&Choice1);
	    switch(Choice1){
		case 1:
		    first_lines(Subject_Count,Subject_Names);
			for(int i=0;i<Student_Count;i++){
			    print_data(s[i],Subject_Count);
			}
		    break;
		case 2:
		    printf("----Menu for Particular student----\n");
		    printf("1.Name.\n""2. Roll no.\n");
		    printf("Enter your choice: ");
		    int Choice2;
		    scanf("%d",&Choice2);
		    switch(Choice2)
		    {
			case 1:
			    {
			    char temp[30];
			    printf("Enter the name of the student : ");
			    scanf("%s",temp);
			    first_lines(Subject_Count,Subject_Names);
			    for(int i=0;i<Student_Count;i++){
				if(strcmp(s[i].Name,temp)==0){
				    print_data(s[i],Subject_Count);
				    }
			    }
			    break;
			    }
			    
			case 2:
			    {
			    int temp;
			    printf("Enter the Roll No. of the student: ");
			    scanf("%d",&temp);
			    first_lines(Subject_Count,Subject_Names);
			    for(int i=0;i<Student_Count;i++){
				if(temp==s[i].id){
				    print_data(s[i],Subject_Count);
				}
			    }
			 }
		    
	    }
	    }    
	    printf("Do you want to continue to display(Y/y) : ");
	    scanf(" %c",&t);
	    
    }while(t=='Y' || t=='y');
    return 0;
}
	    			
