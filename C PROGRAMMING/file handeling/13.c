#include<stdio.h>
//reading from a file
int main()
{
    FILE *ptr=fopen("op.txt","r");
    int b;
    fscanf(ptr,"%d",&b);
    printf("b is %d",b);
    return 0;
}
