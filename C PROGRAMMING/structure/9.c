//passing structure to a function
#include<stdio.h>
struct student{
    int age;
    int roll;
};

void fun(struct student k) 
{
    k.age=20;
    printf("age:%d\n",k.age);
}
int main()
{
    struct student bhim;
    fun(bhim);
    return 0;
}