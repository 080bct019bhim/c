#include<stdio.h>
//to print the address of character
int main()
{
    char a='B';
    char *ptr;
    ptr=&a;
    printf("%d\n\n",ptr);
    char name[5]="1234";
    char *ptr2;
    ptr2=name;
    printf("%d\n",name);
    printf("%d",ptr2);
    return 0;
}