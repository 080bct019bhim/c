#include<stdio.h>

int main()
{
    FILE *ptr=fopen("n.txt","r");
    char ch;
    while((ch=fgetc(ptr))!=EOF)
    printf("%c",ch);
    return 0;
}