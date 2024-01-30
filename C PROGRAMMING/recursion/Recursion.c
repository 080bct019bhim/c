#include<stdio.h>  //0 1 1 2 3 5 8 13 //
int fib(int x)
{
    if(x==0||x==1)
    {
        return x;
    }
    else
    {
        return fib(x-1)+fib(x-2);
    }
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
      printf("%d ",fib(i));
    }
}