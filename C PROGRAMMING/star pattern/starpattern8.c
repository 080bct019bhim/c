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
        for(int j=0; j<7-i; j++)
        {
           
            printf("%d",6-i-j);
            
        }
        printf("\n");
    }

}