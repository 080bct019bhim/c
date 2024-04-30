#include<stdio.h>

int main()
{
    int n=10;
    int *p=&n;
    printf("%d\n",p);
    p++;
    printf("%d",p);
    return 0;
}