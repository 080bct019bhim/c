#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr=a;
    for(int i=0; i<5; i++)
    {
        printf("%d\n",ptr+i); // all adresses will be print
    }
    for(int i=0; i<5; i++)
    {
        printf("%d\n",ptr[i]); //ptr[i]=*(ptr+i)    member aceess hunxa
    }
    return 0;
}