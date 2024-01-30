#include<stdio.h>

void main()
{
    int k=1;
    int m;
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for (int i=0; i<rows; i++)
    {
        m=k;
        for(int j=0; j<=i; j++)
        {
           printf("%d ",m); 
           m=m-rows+i-j;
        }
        k=k+rows-i;
    printf("\n");
    }
}