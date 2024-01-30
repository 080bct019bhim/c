/*
           1
        2  3  2
     3  4  5  4  3
  4  5  6  7  6  5  4
*/
#include<stdio.h>

void main()
{
    for(int i=0; i<4; i++)
    {
        int k=i+1;
        for(int j=0; j<7; j++)
        {
            if(j>=3-i&&j<=3+i)
            {
                printf("%d",k);
                j<3?k++:k--;
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}