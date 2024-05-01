#include<stdio.h>
struct student{
    int roll;
    int age;
};
int main()
{
    struct student std1;
    struct student *ptr=&std1;
    // std1.roll=5
    // *ptr.roll=5; error aauxa yesko solution is
    (*ptr).roll=5;
    printf("Roll is: %d \n",std1.roll);
    // printf("Roll is: %d \n",(*ptr).roll); also works
    return 0;
}