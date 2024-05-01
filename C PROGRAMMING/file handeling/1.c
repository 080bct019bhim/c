#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("bhim.txt","w");
    char name[50]="BHIM PRASAD UPADHAYA";
    fputs(ptr,name);
    return 0;
}