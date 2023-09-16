/*
Name:- Chetan
Date:- 06/02/2023
Description:-   To write program to find the product of given matrix.
Sample input:-  Enter number of rows : 3
                Enter number of columns : 3
                Enter values for 3 x 3 matrix :
                1      2      3
                1      2      3
                1      2      3
                Enter number of rows : 3
                Enter number of columns : 3
                Enter values for 3 x 3 matrix :
                1      1     1
                2      2     2
                3      3     3
Sample output:- Product of two matrix :
                14      14      14
                14      14      14
                14      14      14
*/
#include<stdio.h>
#include<stdlib.h>

int matrix_mul(int **, int, int, int **, int, int, int **, int, int);

int main()
{
    int row1,row2,col1,col2;                                                    //declaring the variables and arrays
    int **mat_a, **mat_b, **result;

    printf("Enter number of rows : ");                                          //getting the value of row1 and initializing memory to row element for mat_a array
    scanf("%d",&row1);
    mat_a = malloc(row1*sizeof(int*));

    printf("Enter number of columns : ");                                       //getting the value of col1 and initializing memory to column elements for mat_a array
    scanf("%d",&col1);
    for(int i = 0 ; i < row1; i++ )
    {
	mat_a[i]=malloc(col1*sizeof(int));
    }


    printf("Enter the values of %d x %d : ",row1,col1);                         //getting elements into mat_a array
    for( int i=0; i<row1 ; i++)
    {
	for ( int j=0; j<col1;j++)
	{
	    scanf("%d",&mat_a[i][j]);
	}
    }

    printf("Enter number of rows : ");                                          //getting the value of row2 and initializing memory to row elements for mat_b array
    scanf("%d",&row2);
    mat_b = malloc(row2*sizeof(int*));

    printf("Enter number of columns : ");                                       //getting the value for col2 and initializing memory to column for mat_b array
    scanf("%d",&col2);
    for(int i = 0 ; i < row2; i++ )
    {
	mat_b[i]=malloc(col2*sizeof(int));
    }

    if( row2 == col1)                                                           //if condition true,then perform the operations
    {
                                                                                //getting elements into mat_b array
	printf("Enter the values of %d x %d : ",row2,col2);
	for( int i=0; i<row2 ; i++)
	{
	    for ( int j=0; j<col2;j++)
	    {
		scanf("%d",&mat_b[i][j]);
	    }
	}
    }
    else                                                                        //if condition fails,then print the statement
    {
	printf("Matrix multiplication is not possible\n");
	return 0;
    }

    int row3=row1;                                                              //initializing value to the variables
    int col3=col2;

    result=malloc(row3*sizeof(int*));                                           //allcate the row and column memory for result array
    for(int i=0;i<row3;i++)
    {
	result[i]=malloc(col3*sizeof(int));
    }


    matrix_mul(mat_a,row1,col1,mat_b,row2,col2, result,row3, col3);             //function call

    return 0;
}

int matrix_mul(int **mat_a, int row1, int col1, int ** mat_b, int row2, int col2, int ** result, int row3, int col3)
{
    int res=0;                                                                  //intialising variable

                                                                                //outer for loop, to run upto row1 times
    for( int i=0; i< row3; i++)
    {
	                                                                            //inner for loop to run upto col2 times
	for ( int j=0; j< col3 ; j++ )
	{
	    for ( int k =0 ; k < col1 ; k ++ )                                      //2nd inner for loop to do arthematic operation and intialise the value to the respective ith element of result array
	    {
		res+=(mat_a[i][k]*mat_b[k][j]);
	    }
	    result[i][j]=res;
	    res=0;
	}
    }
    printf("Product of two matrix : \n");                                       //printing the result array elements
    for(int i =0 ; i < row3; i++ )
    {
	for( int j =0 ; j < col3 ; j++ )
	{
	    printf("%d ",result[i][j]);
	}
	printf("\n");
    }

    return 0;
}