/*                        

*/
#include<stdio.h>

void main()
{
    int k=0;
    for(int i=0; i<9; i++)
    {
        int l=1;
        
        
        for(int j=0; j<5; j++)
        {
            if(j>=4-k)
            {
                printf("%d",l);

                l++;
                        
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
        i<4?k++:k--;
    }
}