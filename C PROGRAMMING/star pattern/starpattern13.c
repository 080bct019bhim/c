/*
                        A
                  C     B
             F    E     D   
        J    I    H     G           
    O   N    M    L     K
*/
#include<stdio.h>
void main()
{
    char k='A';
    for(int i=0; i<5; i++)
    {        
        for(int j=0; j<5; j++)
        {
            if(j>=4-i)
            {                
               printf("%c",k); 
               k--;
            }
            else
            {
                printf(" ");
            }
            
        }
        k=k+2*(i+1)+1;
        printf("\n");
       
    }
}