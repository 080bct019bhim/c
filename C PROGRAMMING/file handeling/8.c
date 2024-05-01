#include<stdio.h>

int main()
{
    FILE *ptr=fopen("naya.txt","w");
    char n='a';
    fputc(n,ptr);
    return 0;
}