#include<stdio.h>

int main()
{
    typedef struct student{
        char name[20];
        int roll;
    }std;
    struct student std1;
    std std2;
    // int std1.roll=5; error correct form is:
    std1.roll=5;          //int vanera pailai declare paxi declare garda duixoti declare
    printf("Enter the name of first student:\n");
    scanf("%[^\n]s",std1.name);
    printf("%s",std1.name);
    return 0;
}