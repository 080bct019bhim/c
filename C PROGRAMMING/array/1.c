#include<stdio.h>
void sum(int n[])  // int *n=&a[0]//void sum(int *n) is also true
{
    int sum=0,i=0;
    while(i<5)
    sum+=n[i++];
    printf("\n\nSum is %d",sum);
}
int main()
{
    int a[5]={1,2,3,4,5};
    sum(a);
    return 0;
}