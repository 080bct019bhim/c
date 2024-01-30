/*
1    
21   
321  
4321 
54321
      
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
                
                printf("%d",l);
                
                l--;
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