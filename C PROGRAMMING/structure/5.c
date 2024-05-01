#include<stdio.h>
//cant compare two objects directly
int main()
{
    struct student{
        int roll;
        int age;
    }a,b;

    a.roll=5;
    a.age=20;
    b.roll=5;
    b.age=20;
    if(a==b)
    {
        printf("Equal:");
    }
    return 0;
}