#include<stdio.h>
//reading from a file
int main()
{
    FILE *ptr=fopen("heyy.txt","r");
    int b,c,d;
    fscanf(ptr,"%d,%d,%d",&b,&c,&d);   //file ma , used as data seperator ko %d ko bich ma ,
    printf("b,c,d is %d,%d,%d",b,c,d);
    return 0;
}
//thankuuuu................
