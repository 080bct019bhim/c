#include<stdio.h>

int main()
{
    FILE *ptr=fopen("new.txt","w");
    char name[10]="Bhim";
    fputs(name,ptr);
    return 0;
}