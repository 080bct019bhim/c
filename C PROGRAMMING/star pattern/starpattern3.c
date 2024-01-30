/*
ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A
*/
#include<stdio.h>

void main()
{
  int row;
  printf("Enter the no of rows:\n\n");
  scanf("%d", &row);
  int a = 2 * row - 1;
  for (int i = 0; i < row; i++)
  {
    char b = 'A';
    for (int j = 0; j < a; j++)
    {
      if (j <= row - 1 - i || j >= row - 1 + i)
      {
        printf("%c", b);
        j < row-1? b++ : b--;  
      }
      else
      {
        printf(" ");
        if(j==row-1)
        {
          b--;
        }
      }
    }
    printf("\n");
  }
}

