#include<stdio.h>

void main()
{
    int row;
    a: printf("Enter the no of rows(Enter no between 1-5): ");
    scanf("%d",&row);
    if(row>5)
    {
        goto a;
    }
   
    char ch[6]="nepal";

    int nsp = row -1 ;
    int a =1 ;
    for ( int i=0 ; i<row ; i++)
    {
        for ( int j= 1 ; j<=nsp ; j++)
        {
            printf ("  ");
        }
        nsp--;
        for ( int j= 1; j<=2*a-1; j++)
        {
            printf ("%c", ch[i]);
            printf (" ");
        }
        a++;
        printf ("\n");
    }
    
}