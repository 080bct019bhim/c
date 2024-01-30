/*
1    
2 6   
3 7 10  
4 8 11 13
5 9 12 14 15    
*/
#include<stdio.h>

void main()
{
    int k=1;
    for(int i=0; i<5; i++)
    {
        int l=k;
        for(int j=0; j<5; j++)
        {
            if(j<=i)
            { 
                printf("%d ",l);  
                l=l+4-j;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        k++;
    }
}