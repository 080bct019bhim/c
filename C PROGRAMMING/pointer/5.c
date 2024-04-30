#include<stdio.h>
int sum(int, int);
int main()
{
    printf("%d\n\n",&sum); 
    printf("%d",sum);       //same output aauxa
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}