/*
Leap year:
cond 1:: 400,800,1200,.... interval of 400 i.e divisible by 400
(n%400==0)

cond 2::4,8,12,16,... intervL OF 4 i.e divisible by 4 but not
divisible by 100 i.e 100,200,300,.... no difference of 100.
both condision should me true no (n%4==0 && n%100!=0)


cond 1 or cond 2 ma jun true vaye ni hunxa
i.e. (n%400==0 || (n%4==0 && n%100!=0))
*/
#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year : \n");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0)
    printf("It is a leap year.");
    else
    printf("It is not a leap year.");
    return 0;
}