#include<stdio.h>
void main()
{
  int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int cols=3;
  int rows=3;
  int transpose[3][3]={{0,0,0},{0,0,0},{0,0,0}};
  for(int i=0;i<rows;i++)
    {
      for(int j=0;j<cols;j++)
        {
          transpose[j][i]=matrix[i][j];
        }
    }
  for(int i=0;i<cols;i++)
    {
      for(int j=0;j<rows;j++)
        {
          printf("%d",transpose[i][j]);
        }
      printf("\n");
    }
  
}