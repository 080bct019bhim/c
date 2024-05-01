#include<stdio.h>
//reading from a file
int main()
{
    FILE *ptr=fopen("hey.txt","r");
    int b,c,d;
    fscanf(ptr,"%d%d%d",&b,&c,&d);   //file ma \n or \t or space ley xuttako  ko data 
    printf("b,c,d is %d,%d,%d",b,c,d);
    return 0;
}
