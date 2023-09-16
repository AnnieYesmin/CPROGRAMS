/*
Name: Yashwanth Pola
Date:
Title:
Sample I/O:
Sample O/P:
*/
#include <stdio.h>
#include <stdlib.h>

int fragments(int, float *[]);
void bubbleSort(float *, int, float *[],int *);
float average(float *,int);
int main()
{
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d",&rows);
  float *arr[rows];
  fragments(rows,arr);
  
}
int fragments(int rows, float *arr[]){
    int cols[rows];
    float avg[rows];
  for(int i=0;i<rows;i++){
      printf("Enter number of columns in row %d: ",i);
      scanf("%d",&cols[i]);
      arr[i]=malloc(sizeof(float)*(cols[i]+1));
  }
  for(int i=0;i<rows;i++){
      printf("Enter %d values for row[%d]: ",cols[i],i);
      for(int j=0;j<cols[i];j++){
	  scanf("%f",(*(arr+i)+j));
      }
      *(*(arr+i)+cols[i])=average(arr[i],cols[i]);
      avg[i]=*(*(arr+i)+cols[i]);
  }
  bubbleSort(avg,rows,arr,cols);
  for(int i=0;i<rows;i++){
      for(int j=0;j<=cols[i];j++){
	  printf("%f  ",*(*(arr+i)+j));
      }
      printf("\n");
  }

}

  void bubbleSort(float *avg, int n, float *arr[],int cols[])
  {
      int i, j;
      for(i = 0; i < n; i++)
      {
	  for(j = 0; j < n-i-1; j++)
	  {
	      if( avg[j] > avg[j+1])
	      {
		  float *temp;
		  temp = arr[j];
		  arr[j] = arr[j+1];
		  arr[j+1] = temp;

		  int temp2;
		  temp2=cols[j];
		  cols[j]=cols[j+1];
		  cols[j+1]=temp2;

		  int temp3;
		  temp3=avg[j];
		  avg[j]=avg[j+1];
		  avg[j+1]=temp3;

	      }
	  }
      }
  }
  float average(float arr[],int n){
      float sum=0;
      for(int i=0;i<n;i++){
	  sum=sum+arr[i];
      }
      return sum/n;
  }

