#include<stdio.h>
int fact(int x)
{
    int a=1;
    for(int i=1; i<=x; i++)
    {
        a=a*i;
    }
    return a;
}

int comb(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
void main()
{
    int p; //p = 3
    printf("Enter the power: ");
    scanf("%d",&p);
    for(int i=0; i<p+1; i++)
    {
        int k=1;
        int l=0;
        for(int j=0; j<2*p+1; j++)
        {
            
            if(j>=p-i && j<=p+i && k)
            {
                printf("%d",comb(i,l)); 
                l++;
                k--;  
            }
            else
            {
                printf(" "); 
                k=1;
            }    
        }
        printf("\n");
       
    }
}