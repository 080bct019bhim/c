#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter:\n");
    scanf("%f%f%f\n",&a,&b,&c);
    FILE *ptr;
    ptr=fopen("new.txt","w");

    return 0;
}