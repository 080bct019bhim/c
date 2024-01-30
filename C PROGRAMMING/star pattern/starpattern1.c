
#include<stdio.h>

void main()
{
  int row;
  printf("Enter the no of rows:\n");
  scanf("%d", &row);
  int a=2*row-1;
  for(int i=0; i<row; i++)
  {
    for(int j=0; j<a; j++)
    {
        if(j<=row-1-i||j>=row-1+i)
        {
            printf("*");
        }

        else
        {
            printf(" ");
        }
    }
    printf("\n");
  } 
}