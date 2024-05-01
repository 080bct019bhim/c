//passing structure to a function
// pass by value hunxa yesari
#include<stdio.h>
typedef struct student{
    int age;
    int roll;
}std;

void fun(std k) 
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