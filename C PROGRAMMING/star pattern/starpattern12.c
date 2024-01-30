/*
1          
3  *  2        
4  *  5  *  6 
10 *  9  *  8  *  7   
11 *  12 *  13 *  14  *  15
*/

#include<stdio.h>

void main()
{
    int k=0;
    for(int i=0; i<5; i++)
    {        
        for(int j=0; j<9; j++)
        {
            if(j<=2*(i+1)-2)
            { 
                if(j%2!=0)
                printf("*"); 

                else if(i%2==0)
                {
                    if(j==0)
                    {
                    k=k+i+1;
                    }
                    printf("%d",k);
                    k++;
                } 

                else if(i%2!=0)
                { 
                    if(j==0)
                    {
                        k=k+i;  
                    }
                        printf("%d",k);
                        k--;

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