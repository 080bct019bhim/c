#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the no: \n");
    scanf("%d",&n);
    int a=log10(n)+1;
    printf("The no of digits is %d",a);
    return 0;
}