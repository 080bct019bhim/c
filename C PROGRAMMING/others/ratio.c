#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter first number: "); scanf("%d",&a);
    printf("Enter second number: "); scanf("%d",&b);
   
    for(int i=2; i<=fmin(a,b); i++)
    { 
            if(a%i==0 && b%i==0)
            { a=a/i;b=b/i; }         
    }
    printf("%d/%d",a,b);
    return 0;
}
