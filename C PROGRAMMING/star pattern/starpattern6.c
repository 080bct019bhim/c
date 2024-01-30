/*
6543210
543210 
43210  
3210   
210    
10     
0      
*/
#include<stdio.h>

void main()
{
    for(int i=0; i<7; i++)
    {
        int k=6-i;
        for(int j=0; j<7; j++)
        {
            if(j<=6-i)
            {
                printf("%d",k);
                k--;
                
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}