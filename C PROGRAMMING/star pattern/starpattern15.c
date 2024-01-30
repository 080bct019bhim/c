#include<stdio.h>

void main()
{
    int m;
    printf("Enter no of rows: ");
    scanf("%d",&m);
    int k=0;
    int n;
    n=m/2+1;
    int r=2*n-1;
    for(int i=0; i<r; i++)
    {
        
        for(int j=0; j<n; j++)
        {
            if(j>=n-1-k)
            {
                printf("%d",j+1);
                
               
            }
            else
            {
                printf(" ");
                
            }
            
             
           
        }
        i<n-1?k++:k--;
        printf("\n");
    }
}