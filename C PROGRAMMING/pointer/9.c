//void pointer
#include<stdio.h>

int main()
{
    int n=10;
    void *p=&n;
    printf("%d\n",p);  //will run but;
    //  printf("%d",*p);  error while dereferencing it : so its solution is typecasting 
    printf("%d\n",*(int *)p);
    return 0;
}