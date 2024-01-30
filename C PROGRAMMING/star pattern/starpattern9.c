/*
     A
     B A
     C B A 
     D C B A
*/

#include<stdio.h>

void main()
{
    char k='A';
    for(int i=0; i<4; i++)
    {
        char l=k;
        for(int j=0; j<4; j++)
        {
            
            if(j<=i)
            {
                
                printf("%c",l);
                
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