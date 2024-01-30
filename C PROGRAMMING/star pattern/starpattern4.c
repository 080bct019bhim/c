/*



  *   
 ***  
***** 
***** 
 ***  
  *  
   

  *   
 ***  
***** 
 ***  
  *  



*/
#include<stdio.h>

void main()
{
    int rows;
    int k=-1;
    printf("Enter the number of rows:");
    
    scanf("%d",&rows);
    int a=(rows-1)/2;
    for(int i=0; i<=rows-1; i++)
    {
        if(rows%2==0)
        {
            if(i<a+1)
            k++;
            if(i>a+1)
            k--;
        }
        else
        {
       i<a+1?k++:k--; 
        }

        for(int j=0; j<=rows-1; j++)
        {
            if(j>=a-k&&j<=a+k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}