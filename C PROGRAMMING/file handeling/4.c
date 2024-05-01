#include<stdio.h>

int main()
{
    FILE *ptr=fopen("n.txt","r");
    char ch=fgetc(ptr);
    while(feof(ptr)==0)
    {
    printf("%c",ch);
    ch=fgetc(ptr);
    }
    return 0;
}


