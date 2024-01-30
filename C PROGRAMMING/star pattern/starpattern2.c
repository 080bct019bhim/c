/*
    1    
   121   
  12321  
 1234321 
123454321
*/
#include<stdio.h>

void main()
{
  int row;
  printf("Enter the no of rows:\n");
  scanf("%d", &row);
  int b=2*row-1;
  
  for(int i=0; i<row; i++)
  {
    int a=1;
    for(int j=0; j<b; j++)
    {
        if(j>=row-1-i&&j<=row-1+i)
        {
            printf("%d",a);
            if(j<row-1)
            {
            a++;
            }
            else
            {
                a--;
            }
        }

        else
        {
            printf(" ");
        }
    }
    printf("\n");
  } 
}