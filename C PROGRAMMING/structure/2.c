#include<stdio.h>

int main()
{
    int a=1,b=2;
    int* ptr1=&a, *ptr2=&b;  
    printf("%d\n%d",ptr1, ptr2);
    return 0;
}