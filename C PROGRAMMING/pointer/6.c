//function pointer
#include<stdio.h>
int sum(int, int);
int main()
{
    int (*ptr)(int, int);//ptr is a pointer which points a fucntion having two integer datatypes as arguments and returns a int type
    ptr=&sum;
    printf("%d\n\n",(ptr)(2,3));
    printf("%d",(*ptr)(2,3));
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}