//sorting 2d array
#include<stdio.h>
int main()
{
    int a[2][2];
    printf("Enter your number:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        scanf("%d",&a[i][j]);
    }
     printf("Your unsorted array is:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2; k++)
            {
                for(int l=0; l<2; l++)
                {
                    if(a[k][l]>a[i][j])
                    {
                       a[i][j]=a[i][j]+a[k][l]; 
                       a[k][l]=a[i][j]-a[k][l];
                       a[i][j]=a[i][j]-a[k][l];
                    }
                }
            }
        }
    }

    printf("Your sorted array is:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}