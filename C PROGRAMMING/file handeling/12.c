#include<stdio.h>

int main()
{
    FILE *ptr=fopen("op.txt","a");//writing in a file
    int a=10;
    fprintf(ptr,"%d",a); //value is 10 is stored
    fclose(ptr);
    return 0;
}
